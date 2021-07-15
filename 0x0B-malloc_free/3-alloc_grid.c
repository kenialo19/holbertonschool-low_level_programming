#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @height: integer.
 * @width: integer.
 *
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
int **array = NULL;
int j = 0;
int k = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
array = malloc(height * sizeof(int *));
if (array == NULL)
{
return (NULL);
}
for (j = 0; j < height; j++)
{
array[j] = malloc(width * sizeof(int));
for (k = 0; k < width; k++)
{
if (array[j] == NULL)
{
for (; j >= 0; j--)
{
free(array[j]);
}
free(array);
return (NULL);
}
array[j][k] = 0;
}
}
return (array);
}
