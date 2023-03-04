#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: integer parameter
 *
 * _putchar: prints to the standard output
 */
void print_line(int n)
{
int tainer = 1;

while (tainer <= n && n > 0)
{
	_putchar(95);
	tainer++;
}
_putchar('\n');
}
