#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;

while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
	if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
	i++;
	}
return (0);
}
