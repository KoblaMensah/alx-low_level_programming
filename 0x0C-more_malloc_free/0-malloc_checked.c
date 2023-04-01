#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: unsigned int
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(sizeof(b));

if (ptr == NULL)
	exit(98);

return (ptr);
}
