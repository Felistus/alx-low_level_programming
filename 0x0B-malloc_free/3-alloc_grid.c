#include "main.h"
/**
 * **alloc_grid -  function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: if width || height == 0 || negative, - NULL
 * if function fails, - NULL
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid2;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid2 = malloc(sizeof(int *) * height);

	if (grid2 == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		grid2[h_index] = malloc(sizeof(int) * width);

		if (grid2[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(grid2[h_index]);
			free(grid2);
			return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			grid2[h_index][w_index] = 0;
	}
	return (grid2);
}
