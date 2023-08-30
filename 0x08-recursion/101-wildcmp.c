#include "main.h"

/**
  * strlength - Gets the length of a given string
  * @s: giving string
  *
  * Return: string length
  */

int strlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlength(s + 1));
}

/**
  * compare - compares the two given string recursively
  * @s1: input string 1
  * @s2: input string 2
  * @len1: length of 1st string
  * @len2: length of 2nd string
  *
  * Return: 1 if strings are identical or 0 otherwise
  */

int compare(char *s1, char *s2, int len1, int len2)
{
	if (*(s2 + (len2 - 1)) == '*')
	{
		if (len2 - 1 == 0 || len1 - 1 == 0)
			return (1);
		/* char imediately b4 * != *(s1 + (len1 - 1))*/
		if (*(s1 + (len1 - 1)) != *(s2 + (len2 - 2)))
			return (1);

		/* for (*(s1 + (len1 - 1)) == *(s2 + (len2 - 2))) */
		len2--;
	}
	/*comp strings frm the end if *(s2 + (len2 -1) != '*' */
	if (*(s1 + (len1 - 1)) != *(s2 + (len2 - 1)))
		return (0);
	if ((len1 - 1) == 0 || (len2 - 1) == 0) /*ret 1 if end of any str*/
		return (1);
	return (compare(s1, s2, len1 - 1, len2 - 1));
}

/**
  * wildcmp - Compares two strings to check if identical
  * @s1: String one
  * @s2: String two
  *
  * Return: 1 if considered identical or 0 otherwise
  */

int wildcmp(char *s1, char *s2)
{
	int len1, len2;

	len1 = strlength(s1);
	len2 = strlength(s2);

	return (compare(s1, s2, len1, len2));
}
