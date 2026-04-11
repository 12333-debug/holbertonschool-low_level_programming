#include <stdio.h>

/**
 * main - program that prints the number of arguments
 * @argc: number of arguments
 * @argv: array that contains the arguments (not used here)
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);

	(void)argv;

	return (0);
}
