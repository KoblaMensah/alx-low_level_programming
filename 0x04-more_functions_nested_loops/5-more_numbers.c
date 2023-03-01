#include "main.h"
/**
 * more_numbers - prints 0 - 14
 *
 * _putchar: prints to the standard output
 */

void more_numbers(void)
{
	int n = 0;
	char a, b;

	while (n <= 9)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}

		_putchar('\n');
		n++;
	}
}
