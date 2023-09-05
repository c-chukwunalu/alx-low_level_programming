#include <stdlib.h>
#include "main.h"

/**
  * strtow - Splits a string into words
  * @str: input string
  *
  * Return: pointer to an array of strings or NULL if fail
  */

char **strtow(char *str)
{
	int i = 0, j, count = 0, k;
	char **str_split;

	if (!(str) || *str == '\0')
		return (NULL);
	while (*(str + i) != '\0') /* get no of words present */
	{
		/* if a word is at the begining of the str */
		if (*str != ' ' && i == 0)
			count++;
		if (*(str + i) == ' ' && *(str + i + 1) != ' ' &&
				*(str + i + 1) != '\0') /* words elsewhere */
			count++;
		i++;
	}

	if (count == 0)
		return (NULL);
	/* allocate mem space for each word & extra space of last NULL elem */

	str_split = malloc((count + 1) * sizeof(char *));
	if (str_split == NULL)
	{
		free(str_split);
		return (NULL);
	}
	i = 0;

	/* alloc mem for each character of each word & copy to d alloc space*/

	while (*(str) != '\0')
	{
		j = 0, k = 0;
		if (*str != ' ')
		{
			/*get the len of each word found*/
			while (*str != ' ' && *str != '\0')
			{
				j++;
				str++;
			}
			str_split[i] = malloc((j + 2) * sizeof(char));
			if (str_split[i] == NULL)
			{
				k = 0;
				for (; k <= i; k++)
					free(str_split[k]);
				free(str_split);
				return (NULL);
			}

			/*copy xter from str to the alloc mem space*/

			for (; j >= 0; j--, k++)
			{
				if (j == 0) /*terminate each word with NULL*/
					str_split[i][k] = '\0';
				else
					str_split[i][k] = *(str - j);
			}
			i++;
		}
		str++;
	}
	str_split[count] = malloc(sizeof(char)); /*last elem*/
	if (str_split[count] == NULL)
	{
		i = 0;
		for (; i <= count; i++)
			free(str_split[i]);
		free(str_split);
		return (NULL);
	}
	str_split[count] = '\0';
	return (str_split);
}
