#include "main.h"

/**
 * swap_int - swaps the values of a and b
 *
 * @a: pointer 1 of type int
 * @b: pointer 2 of type int
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
