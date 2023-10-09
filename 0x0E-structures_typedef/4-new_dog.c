#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with the given information.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to the newly created dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	name_copy = strdup(name);
	owner_copy = strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog_ptr);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
