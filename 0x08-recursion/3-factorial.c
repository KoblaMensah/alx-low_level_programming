#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial ofi
 *
 * Return: ans
 */
int factorial(int n)
{
	int ans = n;

	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	ans = ans * factorial(n - 1);

	return (ans);
}
