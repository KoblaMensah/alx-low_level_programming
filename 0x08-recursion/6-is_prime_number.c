#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: int value to evaluate
 *
 * Return: actual_prime()
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime
 *
 * @n: int value to evaluate
 * @i: iterator
 *
 * Return: actual_prime()
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
