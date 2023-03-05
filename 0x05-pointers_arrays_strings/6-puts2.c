#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string,
 *starting with the first character
 *
 *@str: character parameter
 *
 * _putchar: prints to the std output
 */
void puts2(char *str)
{
int i, j;
j = strlen(str);
for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
_putchar('\n');
}
