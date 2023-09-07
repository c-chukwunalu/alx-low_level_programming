#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array, using malloc
  * @nmemb: number of elements
  * @size: byte size of array elements
  *
  * Return: pointer to alloc memory or NULL on failure
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
