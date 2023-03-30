#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to be copied
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
int i, ii;
char *dupli;

if (str == NULL)
	return (NULL);
i = 0;
ii = 0;

while (str[i])
	{
	ii++;
	i++;
	}

dupli = malloc((ii + 1) * (sizeof(char)));

if (dupli == NULL)
	return (NULL);

for (i = 0; str[i]; i++)
	{
	dupli[i] = str[i];
	}
dupli[ii] = '\0';

return (dupli);
}
