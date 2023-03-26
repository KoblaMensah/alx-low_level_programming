#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: Array of argumets
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	int len, sum;

	char *p;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		i = 1;

		while (i < argc)
		{
			p = argv[i];
			len = strlen(p);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
			i++;
		}

		printf("%d\n", sum);
	}
	return (0);
}
