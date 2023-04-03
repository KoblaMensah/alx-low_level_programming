#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: size in bytes for the new memory block.
 *
 * Return: ptr if new_size equals old_size
 *         NULL if new_size equals zero and ptr is not equal NULL
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *chh;
	char *ptr_c, *ii;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		chh = malloc(new_size);

		if (chh == NULL)
			return (NULL);

		return (chh);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_c = ptr;
	chh = malloc(sizeof(*ptr_c) * new_size);

	if (chh == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ii = chh;

	for (i = 0; i < old_size && i < new_size; i++)
		ii[i] = *ptr_c++;

	free(ptr);
	return (chh);
}
