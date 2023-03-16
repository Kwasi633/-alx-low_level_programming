#include "main.h"
#include <stdlib>
#include <stdio.h>
::
/**
 * alloc_grid - returns a pointer to a 2 dimensional arr
 * @width: width of arr
 * @height: height of arr
 *
 * Return: A pointer to a 2 dimensional arr of ints
 */
int **alloc_grid(int width, int height)
{
	int h, w;
	int **dd;

	if (width <= 0 || height <= 0)
		return (NULL);

	dd = malloc(sizeof(int *) * height);

	if (dd == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		dd[h] = malloc(sizeof(int) * width);

		if (dd[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(dd[w]);
			free(dd);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			dd[h][w] = 0;
		}
	}
	return (dd);
}
