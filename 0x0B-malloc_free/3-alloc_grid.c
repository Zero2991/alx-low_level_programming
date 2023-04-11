#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **yayo;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	yayo = malloc(sizeof(int *) * height);

	if (yayo == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		yayo[x] = malloc(sizeof(int) * width);

		if (yayo[x] == NULL)
		{
			for (; x >= 0; x--)
				free(yayo[x]);

			free(yayo);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			yayo[x][y] = 0;
	}

	return (yayo);
}
