#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - executes a function given as a param on each elem
  * of an array
  * @array: input array
  * @size: size of the given array
  * @action: function pointer
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
