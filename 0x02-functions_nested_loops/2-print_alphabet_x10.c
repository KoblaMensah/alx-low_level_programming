#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * _putchar: prints to the screen
 */
void print_alphabet_x10(void)
{
int i;
char A;

for (i = 1; i <= 10; i++)
{
for (A = 'a'; A <= 'z'; A++)
	{
	_putchar(A);
	}
_putchar('\n');
}
}
