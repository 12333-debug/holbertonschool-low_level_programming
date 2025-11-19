#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - Prints an integer
 * @elem: The integer to print
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5] = {0, 1, 2, 3, 4};

	array_iterator(array, 5, print_elem);
	return (0);
}
