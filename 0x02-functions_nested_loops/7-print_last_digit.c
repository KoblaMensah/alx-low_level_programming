#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: parameter of type int
 *
 * Return: x
 */

int print_last_digit(int n)
{
int x;

if (n < 0)
	x = -1 * (n % 10);
else
	x = (n % 10);
_putchar(x + '0');
return (x);
}
