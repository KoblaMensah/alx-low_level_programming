#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: string to be concatenated upon
 * @s2: string to be concatenated from
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: NULL if fails otherwise a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, ii = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		ii++;

	concat = malloc(sizeof(char) * (ii + 1));

	if (concat == NULL)
		return (NULL);

	ii = 0;

	for (i = 0; s1[i]; i++)
		concat[ii++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[ii++] = s2[i];

	concat[ii] = '\0';

	return (concat);
}
