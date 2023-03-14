#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - allocates memory for a two dimensional grid
* @width: width of the grid
* @height: height of the grid
*
* Return: A double ppointer to an array of integers, otherwise NULL.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int *gridPtr;
	int i, gridSize;

	grid = &gridPtr;
	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	gridSize = (width * height) + 1;
	gridPtr = (int *) malloc(gridSize * sizeof(int));
	if (gridPtr == NULL)
		return (NULL);

	for (i = 0; i < gridSize; i++)
	{
		gridPtr[i] = 0;
	}
	gridPtr[i] = '\0';

	return (grid);
}
