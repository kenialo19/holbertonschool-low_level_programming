#include "holberton.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings.
 * @dest: string
 * @src: string
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int h, d;
for (h = 0; dest[h] != 0; h++)
{
}
for (d = 0; src[d]; d++)
{
dest[h] = src[d];
h++;
}
dest[h] = 0;
return (dest);
}
