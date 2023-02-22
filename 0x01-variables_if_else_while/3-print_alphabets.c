#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (sucess)
 *
 * putchar: prints arguments to the standard output
 */
int main(void)
{
char M;
char N;

for (M = 'a'; M <= 'z'; M++)
	{putchar(M); }
for (N = 'A'; N <= 'Z'; N++)
	{putchar(N); }
putchar('\n');
return (0);
}
