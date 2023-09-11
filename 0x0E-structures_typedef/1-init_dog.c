#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initializes dog structure
  * @d: dog structure pointer
  * @name: dog name
  * @age: dog age
  * @owner: dog owner name
  *
  * Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
