#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2D grid (matrix) of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the newly created grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **j;
	int i, size;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	j = (int **)malloc(height * sizeof(int *));
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		j[i] = (int *)malloc(width * sizeof(int));
		if (j[i] == NULL)
		{
			for (size = 0; size < i; size++)
			{
				free(j[size]);
			}
			free(j);
			return (NULL);
		}
		for (size = 0; size < width; size++)
		{
			j[i][size] = 0;
		}
	}
	return (j);
}
