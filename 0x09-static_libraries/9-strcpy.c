#include "main.h"
#include <string.h>

/**
 * char *_strcpy - copies the string pointed to by src to dest
 *
 *@dest: parameter
 *
 *@src: parameter
 *
 * Return: return string
 */

char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
	i++;
	dest[i] = src[i];
}	while (src[i] != '\0');

return (dest);
}
