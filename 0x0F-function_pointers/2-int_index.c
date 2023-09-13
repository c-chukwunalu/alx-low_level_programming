#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  * @array: input integer arrays
  * @size: size of array
  * @cmp: function pointer to compare values
  *
  * Return: the index of 1st elem for which cmp does not return 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
