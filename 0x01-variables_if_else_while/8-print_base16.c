#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 *
 * putchar: prints to the standard output
 */
int main(void)
{
int n;
char C;

for (n = 48; n <= 57; n++)
	putchar(n);
for (C = 'a'; C <= 'f'; C++)
	putchar(C);
putchar('\n');
return (0);
}
