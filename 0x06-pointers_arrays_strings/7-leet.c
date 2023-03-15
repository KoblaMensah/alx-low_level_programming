#include "main.h"
/**
 * *leet - encodes a string into 1337.
 *
 * @a: pointer to a string of array
 *
 * Return: a
 */
char *leet(char *a)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (a[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (a[indx1] == leet[indx2] ||
			    a[indx1] - 32 == leet[indx2])
				a[indx1] = indx2 + '0';
		}

		indx1++;
	}

	return (a);

}
