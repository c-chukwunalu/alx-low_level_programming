#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of int from min - max
  * @min: starting elements of the array
  * @max: last element of the array
  *
  * Return: pointer to newly created array or NULL if fails
  */

int *array_range(int min, int max)
{
	int *new_array, i = 0, n;

	if (min > max)
		return (NULL);
	n = (max - min) + 1;

	new_array = malloc(sizeof(int) * n);
	if (new_array == NULL)
	{
		free(new_array);
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		*(new_array + i) = min;
	}
	return (new_array);
}
