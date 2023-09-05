#include "main.h"
#include <stdlib.h>

/**
  * create_array - Creates an array of chars, and initializes it with a char
  * @size: input size of array
  * @c: specified character to initialize the array
  *
  * Return: pointer to array or NULL
  */

char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i = 0;

	new_array = (char *) malloc((sizeof(char) * size));
	if (size == 0 || new_array == NULL)
	{
		free(new_array);
		return (NULL);
	}
	while (i < size)
	{
		*(new_array + i) = c;
		i++;
	}
	return (new_array);
}
