#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character.
 *
 * @c: parameter of type int
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
