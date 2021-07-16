#include "holberton.h"
#include <stdlib.h>

/**
 *  *malloc_checked - allocates memory using malloc
 *  @b: unsigned integer
 *
 * Return: a pointer.
 */
void *malloc_checked(unsigned int b)
{
char *h;
if (b == 0)
{
return (NULL);
}
h = malloc(b);
if (h == 0)
{
exit(98);
}
return (h);
}
