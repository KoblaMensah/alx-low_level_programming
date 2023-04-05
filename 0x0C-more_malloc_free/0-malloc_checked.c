#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: unsigned int
 *
 * Return: str
 */
void *malloc_checked(unsigned int b)
{
void *str;

str = malloc(sizeof(b));

if (str == NULL)
	exit(98);

return (str);
}
