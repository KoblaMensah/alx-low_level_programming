#include "main.h"
#include <string.h>
/**
 * puts_half - print the second half of the string
 *
 *@str: character parameter
 *
 * _putchar: prints to the std output
 */
void puts_half(char *str)
{
int len1, len2, len3, len4;
len1 = strlen(str);
len2 = len1 / 2;
len3 = len1 % 2;

	if (len3 != 0)
	len4 = len2 + 1;
	else
	len4 = len2;
for (; len4 < len1; len4++)
{
_putchar(str[len4]);
}
_putchar('\n');
}
