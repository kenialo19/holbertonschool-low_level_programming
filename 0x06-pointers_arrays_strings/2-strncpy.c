#include "holberton.h"
#include <string.h>

/**
 *  *_strncpy - copies a string.
 * @dest: string.
 * @src: string.
 * @n: whole
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = strlen(dest);
int b = strlen(src);
int k, s;
for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
for (s = b; s < n; s++)
{
dest[s] = 0;
}
dest[a] = 0;
return (dest);
}
