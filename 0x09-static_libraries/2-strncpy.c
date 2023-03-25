#include "main.h"
/**
 * *_strncpy - copies a string.
 *
 * @dest: a pointer to the destination where string will be copied to
 * @src: a pointer to the source where string will be copied from
 * @n: maximum number of characters to be copied from src to dest
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (n > i && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
while (n > i)
	{
	dest[i] = '\0';
	i++;
	}
return (dest);
}
