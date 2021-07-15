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
int **x = grid;
while (height--)
{
free(*grid);
grid++;
}
free(x);
}
