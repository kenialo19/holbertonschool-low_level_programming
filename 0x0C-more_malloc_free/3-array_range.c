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

  h = malloc((max + 1) * sizeof(int));
  if (h == NULL)
{
  return (NULL);
}  
  for (n = min; n <= max; n++)
    {
      h[n] = n;
    }
  return (h);
}
