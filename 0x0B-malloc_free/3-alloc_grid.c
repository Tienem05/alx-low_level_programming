#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of
 * integers with each element initialized to 0.
 * @width: the width of the two dimensional array row.
 * @height: the height of the two dimensional array column
 * Return: if width <= 0, height  <= 0, or the function fails
 * NULL
 * Otherwise -  a pointer to the two dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **twod;
	int a, b, j, k;

	a = b = j = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	/* using typecasting (int *) to dereference values */
	twod = malloc(height * sizeof(int *));
	if (twod == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		twod[a] = malloc(width * sizeof(int));

		if (twod[a] == NULL)
		{
			for (k = 0; k < a; k++)
				free(twod[k];
			free(twod);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (j = 0; j < width; j++)
			twod[b][j] = 0;
	}
	return (twod);
}
