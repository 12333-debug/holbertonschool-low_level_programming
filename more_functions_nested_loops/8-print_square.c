#include "main.h"

/**
 * print_square - prints a square of size "size"
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int li, col;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	for (li = 0; li < size; li++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar(35);
		}

		_putchar(10);
	}
}
