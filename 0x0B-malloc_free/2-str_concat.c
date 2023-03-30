#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 *
 * @s1: string to be concatenated to
 * @s2: string to be concatented to s1
 *
 * Return: NULL if failed or pointer
 */
char *str_concat(char *s1, char *s2)
{
int i, ii;
char *str;

if (s1 == NULL || s2 == NULL)
	return (NULL);

i = ii = 0;

while (s1[i] != '\0')
	i++;

while (s2[ii] != '\0')
	ii++;

str = malloc(sizeof(char) * (i + ii + 1));

if (str == NULL)
	return (NULL);

i = ii = 0;

while (s1[i] != '\0')
	{
	str[i] = s1[i];
	i++;
	}
while (s2[ii] != '\0')
	{
	str[i] = s2[ii];
	i++;
	ii++;
	}
str[i] = '\0';

return (str);

}
