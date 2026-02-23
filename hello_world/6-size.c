#include <stdio.h>
/**
 * main - Write a C program that prints the size of various types on the computer it is compiled and run on.
 *
 * Return : always 0
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n",sizeof(char));
	printf("Size of a char: %u byte(s)\n",sizeof(int));
	printf("Size of a char: %zu byte(s)\n",sizeof(long));
	printf("Size of a char: %f byte(s)\n",sizeof(float));

	return (0);
}
