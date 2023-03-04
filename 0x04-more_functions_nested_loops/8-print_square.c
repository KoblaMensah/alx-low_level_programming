#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: integer paramater
 *
 * _putchar: prints to the standard output
 */
void print_square(int size)
{
int a, b;

for (a = 0; a < size; a++)
{
	b = 0;
	while (b < size)
	{
		_putchar(35);
		b++;
	}
_putchar('\n');
}
if (size <= 0)
	_putchar('\n');
}
