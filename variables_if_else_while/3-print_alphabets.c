#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry  point
 *
 * Return: always 0
 */

int main(void)
{
	int c = 97;
	int a = 65;

	while (c < 123)
	{
		putchar(c);
			c++;
	}
	while (a < 91)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
