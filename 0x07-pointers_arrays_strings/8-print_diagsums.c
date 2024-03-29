#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 *
 * @a: matrix of integers.
 * @size: size of the matrix.
 *
 */
void print_diagsums(int *a, int size)
{
	int x, y, z;

	x = 0;
	y = 0;

	for (z = 0; z < size; z++)
	{
		x = x + a[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		y += a[z * size + (size - z - 1)];
	}

	printf("%d, %d\n", x, y);
}
