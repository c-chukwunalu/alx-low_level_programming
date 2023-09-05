#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concat 2 strings into a newly allocated memory space
  * @s1: string one
  * @s2: string two
  *
  * Return: pointer to concatenated strings
  */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	new_string = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}
	while (i < len1)
	{
		*(new_string + j) = *(s1 + i);
		j++;
		i++;
	}
	i = 0;
	while (i < len2)
	{
		*(new_string + j) = *(s2 + i);
		j++;
		i++;
	}
	return (new_string);
}
