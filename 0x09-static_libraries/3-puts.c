#include "main.h"

/**
 * _puts - prints a string and a new line
 *
 * @str: pointer to a string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
