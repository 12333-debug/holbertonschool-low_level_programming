#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
