#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 *
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: NULL if ac equals zero, av equals NULL or function fails
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, ii, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (ii = 0; av[arg][ii]; ii++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (ii = 0; av[arg][ii]; ii++)
			str[i++] = av[arg][ii];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
