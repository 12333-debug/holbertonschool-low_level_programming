#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - Allocates a 2D grid of integers initialized to 0
 *@width: width of the grid
 *@height: height of the grid
 *
 *Return: pointer to the grid, or NULL on error
*/
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;


	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height ; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i--)
			free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
