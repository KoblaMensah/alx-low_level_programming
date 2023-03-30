#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional array
 *
 * @grid: two dimensional array to be freed
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
