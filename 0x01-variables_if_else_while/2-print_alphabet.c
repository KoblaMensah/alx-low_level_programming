#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (sucess)
 *
 * putchar: prints a character to the standard output
 */
int main(void)
{
char M;
for (M = 'a'; M <= 'z'; M++)
	{putchar(M); }
putchar('\n');
return (0);
}
