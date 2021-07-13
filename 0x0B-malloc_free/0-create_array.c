#include "holberton.h"
#include <stdlib.h>

/**
 *  *create_array - creates an array of chars, and initializes it with a specific char.
 *  @size: int 
 *  @c: char
 *
 * Return: a pointer.
 */
char *create_array(unsigned int size, char c)
{
unsigned int n;
char *j;
if (size == 0)
{
return (NULL);
}
j = malloc(size * sizeof(char));
for (n = 0; n <= size; n++)
{
j[n]= c;
}
return (j);
}
