#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
