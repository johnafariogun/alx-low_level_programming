#include "main.h"
#include <stdlib.h>
/**
 * free_grid - this frees the grid previoously created by 3-alloc_grid.c
 * @grid: pointer to the grid
 * @height: height of the original grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
