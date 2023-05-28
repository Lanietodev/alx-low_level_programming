#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width:  width of array
 * @height: height of array
 * Return: a pointer to a pointer to grid
*/
int **alloc_grid(int width, int height)
{
int w;
int h;
int **grid;

h = 0;
while (h < height)
{
w = 0;
while (w < width)
{
w++;
}
h++;
}
if (w == 0 || h == 0 || w < 0 || h < 0)
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));
if (grid[h] == NULL)
{
exit(0);
}
for (h = 0; h < height; h++)
{
grid[h] = (int *)malloc(width * sizeof(int));
if (grid[h][w] == NULL)
{
exit(0);
}
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
{
grid[h][w] = 0;
}
}
return (grid);
}
