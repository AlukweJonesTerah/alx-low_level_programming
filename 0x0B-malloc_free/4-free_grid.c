#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: width of the grid
 * @height: height of the grid
 * Return: pointer to the newly created grid, or NULL on failure
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
