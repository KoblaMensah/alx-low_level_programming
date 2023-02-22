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
for (n = 48; n <= 57; n++)
{
if (n != 57)
{
	putchar(n);
	putchar(44);
	putchar(32);
}
else
	putchar(n);
}
return (0);
}
