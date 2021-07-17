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
  char *h;
  unsigned int n;
  if (nmemb == 0 && size == 0)
  {
    return (0);
  }

h = malloc(nmemb * (size));
  if (h == 0)
  {
    return (0);
  }
  
for (n =  0; n < nmemb; n++)
{
 h[n] = 0;
}
  
return (h);
  
}
