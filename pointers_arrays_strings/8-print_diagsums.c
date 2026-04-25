#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix (cast from int[][])
 * @size: Size of the matrix (number of rows and columns)
 *
 * Description: Computes and prints the sum of the main diagonal and the
 * secondary diagonal of a square matrix of integers. The matrix is stored
 * in a contiguous memory block and accessed using pointer arithmetic.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];             /* Diagonale principale */
		sum2 += a[i * size + (size - 1 - i)]; /* Diagonale secondaire */
	}

	printf("%d, %d\n", sum1, sum2);
}
