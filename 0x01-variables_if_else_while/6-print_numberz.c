#include <stdio.h>
/**
 * main - enrty point
 *
 * Return: Always 0
 *
 * putchar: prints arguments to the standard output
 */
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
	putchar(n);
putchar(10);
return (0);
}
