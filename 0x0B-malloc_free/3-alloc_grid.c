#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the array
 * @height: height of array
 *
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
int **array;
int i, ii;

if (width <= 0 || height <= 0)
	return (NULL);

array = malloc(sizeof(int *) * height);

if (array == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);

if (array[i] == NULL)
{
for (; i >= 0; i--)
free(array[i]);

free(array);

return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (ii = 0; ii < width; ii++)
array[i][ii] = 0;
}
return (array);

}
