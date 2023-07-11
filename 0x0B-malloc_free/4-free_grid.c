#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free two dimensional grid.
 * @grid: rows of grid.
 * @height: columns of grid.
 * Return: pointer to a two dimensional array.
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);


	}
	free(grid);


}
