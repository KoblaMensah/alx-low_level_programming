#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string pointer to be searched
 * @accept: string pointer were set of bytes will be searched for
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
