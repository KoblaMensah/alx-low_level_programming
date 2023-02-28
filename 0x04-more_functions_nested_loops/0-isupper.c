#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 * @c: parameter of type int
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
if (isupper(c))
	return (1);
else
	return(0);
}
