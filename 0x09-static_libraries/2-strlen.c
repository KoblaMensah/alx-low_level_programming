#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: of type char
 *
 * Return: l
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
