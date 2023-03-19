#include "main.h"
/**
 * *_strstr - locates a substring.
 *
 * @haystack: string to be searched
 * @needle: string to be located
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *d = haystack;
		char *h = needle;

		while (*d == *h && *h != '\0')
		{
			d++;
			h++;
		}

		if (*h == '\0')
			return (haystack);
	}

	return (0);
}
