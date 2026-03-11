#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - append the string of characters
 * @s1: string empty
 * @s2: string of char
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)

{
int i = 0;
int index = 0;
char *ptr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;

while (s2[index] != '\0')
index++;

ptr = malloc(((i + index)+1) * sizeof(char));
if (ptr == NULL)
return (NULL);

i = 0;

while (s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}
index = 0;

while (s2[index] != '\0')
{
ptr[i] = s2[index];
i++;
index++;
}

ptr[i] = '\0';
return (ptr);
}
