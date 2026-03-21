#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    int i, len1 = 0, len2 = 0;

    if (name == NULL || owner == NULL)
        return (NULL);

    while (name[len1])
        len1++;
    while (owner[len2])
        len2++;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    d->name = malloc(len1 + 1);
    if (d->name == NULL)
    {
        free(d);
        return (NULL);
    }

    d->owner = malloc(len2 + 1);
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return (NULL);
    }

    for (i = 0; i < len1; i++)
        d->name[i] = name[i];
    d->name[i] = '\0';

    for (i = 0; i < len2; i++)
        d->owner[i] = owner[i];
    d->owner[i] = '\0';

    d->age = age;

    return (d);
}
