#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 *
 * @size: size of array to be initialized
 * @c: char to initialize array with
 *
 * Return: pointer to array or NULL if function fails
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
return (ptr);
}
