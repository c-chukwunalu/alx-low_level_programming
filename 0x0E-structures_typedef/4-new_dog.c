#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog and allocates space
  * @name: new dog name
  * @age: new dog age
  * @owner: new dog owner
  *
  * Return: Pointer to new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i = 0, lname = 0, lowner = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}

	while (*(name + lname) != '\0')
		lname++;
	while (*(owner + lowner) != '\0')
		lowner++;

	ptr->name = malloc(sizeof(char) * (lname + 1));
	ptr->owner = malloc(sizeof(char) * (lowner + 1));

	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}

	for (; i < lname; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	i = 0;

	ptr->age = age;

	for (; i < lowner; i++)
		ptr->owner[i] = owner[i];

	ptr->owner[i] = '\0';
	return (ptr);
}
