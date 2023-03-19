#include "main.h"
/**
 * *_memcpy - copies memory area.
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: unsigned int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;

while (src[i] != '\0' && n > 0)
	{
	dest[i] = src[i];
	i++;
	n--;
	}
dest[i] = '\0';
return (dest);

}
