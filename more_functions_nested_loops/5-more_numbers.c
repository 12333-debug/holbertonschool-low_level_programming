#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int line;
	int n;

	for (line = 0; line < 10; line++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + 48);

			_putchar((n % 10) + 48);
		}
		_putchar(10);
	}
}
