#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: pointer to string to be measured
 *
 * Return: i
 */
int _strlen_recursion(char *s)
{
int i = 0;

	if (*s)
	{
		i++;
		i = i +  _strlen_recursion(s + 1);
	}

	return (i);

}
