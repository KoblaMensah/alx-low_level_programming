#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 *
 *@a: array name
 *@n: nth element
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n - i != 1)
{
printf("%d", a[i]);
printf(",");
printf(" ");
}
else
printf("%d", a[i]);
}
printf("\n");
}
