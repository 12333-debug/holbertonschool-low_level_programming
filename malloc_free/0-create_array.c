#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and fills it with a character
 * @size: size of the array
 * @c: character to fill the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)

{
char *ptr;
unsigned int count = 0;

if (size == 0)
return (NULL);

ptr = malloc(size * sizeof(char));
if (ptr == NULL)
return (NULL);

while (count < size)
{
ptr[count] = c;
count++;
}
return (ptr);
}
