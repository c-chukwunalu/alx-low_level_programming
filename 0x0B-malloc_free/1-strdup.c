#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Copies a str to a newly allocated space in memory
  * @str: the given string to be copied
  *
  * Return: a pointer to the new string or NULL for insuf memory
  */

char *_strdup(char *str)
{
	char *new_string;
	int i = 0, len = 0;

	if (!str)
		return (NULL);
	while (*(str + len) != '\0')
	{
		len++;
	}
	new_string = (char *) malloc(sizeof(char) * len + 1);

	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}
	while (i < len)
	{
		*(new_string + i) = *(str + i);
		i++;
	}
	return (new_string);
}
