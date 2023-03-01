#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * _putchar: prints to the standard output
 */
void print_most_numbers(void)
{
int n = 48;

while (n <= 57)
	{
	if (n != 50 && n != 52)
		_putchar(n);
	n++;
	}
_putchar('\n');
}
