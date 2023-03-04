#include "main.h"
/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: integer parameter
 *
 * _putchar: prints to the standard output
 */
void print_diagonal(int n)
{
int a = 0;
int b;

	while (a < n && n > 0)
	{
		b = 0;
		while (b < a)
		{
		_putchar(' ');
		b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
if (a == 0)
	_putchar('\n');
}
