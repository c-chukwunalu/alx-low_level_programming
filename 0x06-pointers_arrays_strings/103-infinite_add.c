#include "main.h"

/**
 * infinite_add - Adds two numbers given as a string
 * @n1: 1st given number
 * @n2: 2nd given number
 * @r: Buffer for result storage
 * @size_r: Size of buffer
 *
 * Description: added each number digit in the strings n1 and n2
 * individually from right to left by manipulating the ASCII values to
 * always give the same result as if it was an int addition.
 * ASCII addition = n1[i] + (n2[i] - 48) + carry. if addition > 9,
 * subtract 10 and carry 1 to next digit. if addition <= 9, value is
 * same and carry is zero.
 * Return: Pointer to buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, maxlen, i = 0, carry = 0, temp;

	while (*(n1 + i) != '\0')
	{
		i++;
	}
	len1 = i;
	i = 0;
	while (*(n2 + i) != '\0')
	{
		i++;
	}
	len2 = i;
	i = 1;

	/* get length of max string length */
	if (len1 >= len2)
		maxlen = len1;
	else
		maxlen = len2;

	/*accounts 4 '\0' & 1 xtra digit at zero index 4 last carry if any*/
	if (maxlen + 1 >= size_r)
	{
		return (0);
	}

	/*set d null terminator for r, uses r[0]-r[maxlen] to store ans*/
	*(r + (maxlen + 1)) = '\0';

	/** start 4rm right of n1[len1 - 1] & n2[len2 - 1] */
	for (i = 1; i <= maxlen; i++)
	{
		/* get ASCII addition */
		temp = n1[len1 - i] + (n2[len2 - i] - 48) + carry;

		/* check 4 digit end for any/both n1 & n2 */
		if (len1 == i || len2 == i)
		{
			/*n1, n2 have reached end and len1 == len2 */
			if (len1 == i && len2 == i)
			{
				if (temp > 57) /* sum > 9 */
				{
					*(r + (maxlen - i + 1)) = temp - 10;
					/* carry 1 to r[0] */
					*(r + (maxlen - i)) = 49;
				}
				else
				{
					*(r + (maxlen - i + 1)) = temp;
					*(r + (maxlen - i)) = 48;
				}
				break;
			}
			if (len1 == i) /* for len2 > len1 */
			{
				if (temp > 57)
				{
					*(r + (maxlen - i + 1)) = temp - 10;
					carry = 1;
				}
				else
				{
					*(r + (maxlen - i + 1)) = temp;
					carry = 0;
				}
				while (len2 != i)
				{
					i++;
					temp = n2[len2 - i] + carry;
					if (temp > 57)
					{
						*(r + (maxlen - i + 1)) =
							temp - 10;
						carry = 1;
					}
					else
					{
						*(r + (maxlen - i + 1)) =
							temp;
						carry = 0;
					}
				}

				*(r + (maxlen - i)) = carry + 48;
				break;
			}
			if (len2 == i) /* for len1 > len2 */
			{
				if (temp > 57)
				{
					*(r + (maxlen - i + 1)) = temp - 10;
					carry = 1;
				}
				else
				{
					*(r + (maxlen - i + 1)) = temp;
					carry = 0;
				}
				while (len1 != i)
				{
					i++;
					temp = n1[len1 - i] + carry;
					if (temp > 57)
					{
						*(r + (maxlen - i + 1)) =
							temp - 10;
						carry = 1;
					}
					else
					{
						*(r + (maxlen - i + 1)) =
							temp;
						carry = 0;
					}
				}
				*(r + (maxlen - i)) = carry + 48;
				break;
			}
		}
		else
		{
			if (temp > 57)
			{
				*(r + (maxlen - i + 1)) = temp - 10;
				carry = 1;
			}
			else
			{
				*(r + (maxlen - i + 1)) = temp;
				carry = 0;
			}
		}
	}
	if (*r == '0')
		return (r + 1);
	else
		return (r);
}
