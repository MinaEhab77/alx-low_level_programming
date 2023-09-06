#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

int **alloc_grid(int width, int height) 
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
		free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}
	return (grid);
}
