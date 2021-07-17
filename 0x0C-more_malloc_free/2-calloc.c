#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: string
 * @size: integer
 *
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *h;
unsigned int n;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
h = malloc(nmemb * size);
if (h == NULL)
{
return (NULL);
}
for (n =  0; n < nmemb * size; n++)
{
h[n] = 0;
}
return (h);
}
