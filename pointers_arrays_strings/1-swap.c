#include "main.h"

/**
 * swap_int - Swap two integer values
 * @a: First integer pointer
 * @b: Second integer pointer
 *
 * Swaps the values of *a and *b.
 */

void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
