#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints n to 98
 *
 *@n: integer parameter
 *
 * printf: prints to the standard output
 */

void print_to_98(int n)
{
int temp;
temp = n;
for (; temp > 98; temp--)
{
printf("%d", temp);
printf(",");
printf(" ");
}
while (temp <= 98)
	{
	if (temp == 98)
	{
	printf("%d", temp);
	}
	else if (98 - temp != 0)
	{
	printf("%d", temp);
	printf(",");
	printf(" ");
	}
	temp++;
	}

printf("\n");
}
