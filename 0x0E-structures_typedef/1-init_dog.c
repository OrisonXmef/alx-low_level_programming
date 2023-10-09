#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog with the provided values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Error: Invalid pointer to struct dog\n");
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
