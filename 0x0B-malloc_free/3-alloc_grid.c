#include "main.h"

/**
 *alloc_grid - entry point
 *@width: width of an array
 *@height: height of an array
 *Return: a pointer to a allocated grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			ptr[k][l] = 0;
	}
	return (ptr);
}
