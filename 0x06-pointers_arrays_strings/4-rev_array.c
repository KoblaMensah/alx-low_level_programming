#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: pointer to an integer
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
	{
	int M;

	if (n-- > 0)
		{
		M = a[i];
		a[i] = a[n];
		a[n] = M;
		}
	}
}
