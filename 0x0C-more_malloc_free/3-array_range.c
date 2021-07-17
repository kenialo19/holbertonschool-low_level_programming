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
{ int *h = NULL;
  int n, k;

  if (min > max)
  {
    return (NULL);
  }
  k = max - min;

  h = malloc((k + 1) * sizeof(int));
  if (h == NULL)
{
  return (NULL);
}
  for (n = 0; n <= k; n++)
    {
      if (min <= max)
      {
      h[n] = min;
      min++;
    }
      }
  return (h);
}
