#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *
 * @min: first value of the array.
 * @max: last value of the array.
 *
 * Return: NULL if min is greater than maximum or function fails
 *         Otherwise - a pointer
 */
int *array_range(int min, int max)
{
	int *array, i, weight;

	if (min > max)
		return (NULL);

	weight = max - min + 1;

	array = malloc(sizeof(int) * weight);

	if (array == NULL)
		return (NULL);
	i = 0;

	while (i < weight)
	{
		array[i] = min++;
		i++;
	}

	return (array);
}
