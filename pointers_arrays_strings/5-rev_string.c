#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int i = 0, j, temp;

	while (s[i] != '\0')
		i++;

	i = i - 1;
	for (j = 0; j < i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
