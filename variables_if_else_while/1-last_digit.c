#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * more headers goes there
 *
 * betty style doc for function main goes there
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int Last_digit_of;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit_of = n % 10;
	printf("Last digit of");
	if (Last_digit_of > 5)
		printf(" %d is %d and is greater than 5\n", n, Last_digit_of);
	if (Last_digit_of == 0)
		printf(" %d is %d and is 0\n", n, Last_digit_of);
	if (Last_digit_of < 6 && Last_digit_of != 0)
		printf(" %d is %d and is less than 6 and not 0\n", n, Last_digit_of);
	return (0);
}
