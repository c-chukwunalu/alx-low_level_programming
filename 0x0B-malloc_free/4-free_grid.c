#include <stdlib.h>
#include "main.h"

/**
  * free_grid - Frees a 2 dimensional grid memory space
  * @grid: Given 2-D grid
  * @height: row number of grid
  *
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
