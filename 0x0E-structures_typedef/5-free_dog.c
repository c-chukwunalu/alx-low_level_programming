#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Frees dog struct memeory
  * @d: pointer to the dog struct to be freed
  *
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
