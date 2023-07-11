#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - a dimensional array of integers.
 * @width: width of dimension.
 * @height: height of dimension.
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;
	int s;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)


		{
			for (i = 0; i < height; i++)
			{
				p = matrix[i];
				free(p);

			}
			free(matrix);
			return (NULL);
		}
	}
	for (s = 0; s < height; s++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[s][j] = 0;
		}
	}
	return (matrix);


}

