#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (line = 0; line < n; line++)
	{
		for (space = 0; space < line; space++)
		{
			_putchar(32);
		}

		_putchar(92);
		_putchar(10);
	}
}
