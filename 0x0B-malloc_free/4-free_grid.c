#include <stdlib.h>
#include "main.h"

/**
* **free_grid - deallocates memory for a two dimensional grid
* @grid: The 2D grid to deallocate
* @height: height of the grid(rows)
*
* Return: Void.
*/
void free_grid(int **grid, __attribute__((unused))int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
