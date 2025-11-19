#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and copies name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n_copy, *o_copy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	n_copy = strdup(name);
	if (n_copy == NULL)
	{
		free(d);
		return (NULL);
	}

	o_copy = strdup(owner);
	if (o_copy == NULL)
	{
		free(n_copy);
		free(d);
		return (NULL);
	}

	d->name = n_copy;
	d->age = age;
	d->owner = o_copy;

	return (d);
}
