#include "holberton.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings.
 * @dest: string.
 * @src: string.
 * @n: entero
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int d = strlen(dest);
int s = strlen(src);
int f;
if (n > s)
{
n = s;
}
for (f = 0; f < n; f++)
{
dest[f + d] = src[f];
}
dest[f + d] = 0;
return (dest);
}
