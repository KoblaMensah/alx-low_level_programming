#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * _putchar: prints character to the std output
 */
void jack_bauer(void)
{
int m;
int h;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
	if (h < 10)
	{
	_putchar('0');
	_putchar(h + '0');
	}
	else if (h >= 10)
	{
	_putchar((h / 10) + '0');
	_putchar((h % 10) + '0');
	}
	if (m < 10)
	{
	_putchar(':');
	_putchar('0');
	_putchar(m + '0');
	}
	else if (m >= 10)
	{
	_putchar(':');
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	}
	_putchar('\n');
}
}
}
