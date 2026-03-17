#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string into newly allocated memory
 * @str: string to copy
 *
 * Return: pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)

{
int i = 0;
char *ptr;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
i++;

ptr = malloc((i + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);

i = 0;

while (str[i] != '\0')
{
ptr[i] = str[i];
i++;
}
ptr[i] = '\0';
return (ptr);
}
