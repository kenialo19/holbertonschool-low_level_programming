#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - oncatenates two strings.
 * @nmemb: string
 * @size: integer
 *
 * return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
  int *h;
  unsigned int n;
  if (nmemb == 0 || size == 0)
  {
    return (NULL);
  }

h = malloc(nmemb * sizeof(int));
  if (h == NULL)
  {
    return (NULL);
  }
  
for (n =  0; n < nmemb; n++)
{
   h[n] = 0;
}
 return (h);
}
