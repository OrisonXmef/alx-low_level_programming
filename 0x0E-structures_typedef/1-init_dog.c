#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * @brief Initializes a struct dog with the provided values.
 *
 * This function initialize a struct dog with the provided values for name, age
 * and owna. The struct dog pointa 'd' should point to a valid memory location.
 *
 * @param d     Pointer to the struct dog to be initialized.
 * @param name  Name of the dog.
 * @param age   Age of the dog.
 * @param owner Owner of the dog.
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
