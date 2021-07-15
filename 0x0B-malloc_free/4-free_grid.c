#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - concatenates two strings.
 * @grid: integer.
 * @height: integer.
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
int x = 0;
if (grid == NULL)
{
return;
}
for (x = 0; x < height; x++)
{
free(grid[x]);
}
}
