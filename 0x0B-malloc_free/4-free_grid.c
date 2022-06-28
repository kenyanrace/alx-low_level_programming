#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - main function
 * @grid: kjiojn
 * @height: kfyg
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(*(grid + k));
	}
	free(grid);
}
