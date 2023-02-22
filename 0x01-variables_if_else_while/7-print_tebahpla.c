#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 *
 * putchar: prints argument to the standard output
 */
int main(void)
{
char C;

for (C = 'z'; C >= 'a'; C--)
	putchar(C);
putchar('\n');
return (0);
}
