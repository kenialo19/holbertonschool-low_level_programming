#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: a pointer.
 */
int *array_range(int min, int max)
{ int *h;
  int n;

  if (min > max)
  {
    return (NULL);
  }

  h = malloc(max * sizeof(int));
  if (h == 0)
{
  return (0);
}  
  for (n = min; n < max; n++)
    {
      h[n] = n;
    }
  return (h);
}
