#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry  point
 *
 * Return: always 0
 */

int main(void)
{
	int c = 48;
	int l = 97;

	while (c < 58)
	{
		putchar(c);
			c++;
	}
	while (l < 103)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
