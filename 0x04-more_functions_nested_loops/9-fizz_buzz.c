#include <stdio.h>
/**
 * main - Entry point
 *
 * printf: prints to the standard output
 *
 * Return: 0
 */
int main(void)
{
int n = 1;

while (n <= 100)
{

if ((n % 3 == 0) && (n % 5 == 0))
	{
	printf("FizzBuzz");
	printf(" ");
	}
else if (n % 3 == 0)
	{
	printf("Fizz");
	printf(" ");
	}
else if (n % 5 == 0)
	{
	printf("Buzz");
	printf(" ");
	}
else
	{
	printf("%d", n);
	printf(" ");
	}
n++;
}
printf("\n");
return (0);
}
