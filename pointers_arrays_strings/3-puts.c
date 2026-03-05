#include "main.h"
/**
 * _puts - Print a string followed by a new line
 * @str: String to print
 *
 * Prints each character of the string using _putchar.
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
