#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array memory previously allocated
 * @grid: the array pointer
 * @height: number of rows in array
 * Return: return nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
