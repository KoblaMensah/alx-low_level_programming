#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
int i = 1;
if (argc == i)
	printf("%d\n", argc - i);
else if (argc > i)
	printf("%d\n", argc - i);

return (0);
}
