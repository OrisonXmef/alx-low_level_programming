#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with its attributes.
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a float).
 * @owner: The owner of the dog (a string).
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif /* DOG_H */
