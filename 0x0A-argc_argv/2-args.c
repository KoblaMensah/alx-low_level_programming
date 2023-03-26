#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
int i;

for (i = 0; argc > i; i++)
	{
	printf("%s\n", argv[i]);
	}
return (0);
}
