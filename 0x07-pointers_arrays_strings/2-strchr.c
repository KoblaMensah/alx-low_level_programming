#include "main.h"
/**
 * *_strchr - locates a character in a string.
 *
 * @s: pointer of type character
 * @c: variable c of type char
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
