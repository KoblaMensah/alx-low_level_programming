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
char M;

for (M = 'a'; M <= 'z'; M++)
{
if (M == 'e' || M == 'q')
	{M++; }
else
	putchar(M);

};
putchar('\n');
return (0);
}
