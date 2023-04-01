#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: byte size of each array element.
 *
 * Return: NULL if function fails,size or  nmemb is 0
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	ch = ptr;

	for (i = 0; i < (size * nmemb); i++)
		ch[i] = '\0';

	return (ptr);
}
