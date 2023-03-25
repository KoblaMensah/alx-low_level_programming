#include "main.h"
/**
 * *_strncat - concatenates two strings using
 * at most n bytes from source
 *
 * @dest: destination
 * @src: source
 * @n: number of byte from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;

while (dest[i] != '\0')
	{
	i++;
	}
j = 0;

while (n > j && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
dest[i] = '\0';
return (dest);
}
