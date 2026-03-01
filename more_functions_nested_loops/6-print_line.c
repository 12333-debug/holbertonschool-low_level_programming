#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}

	_putchar(10);
}
