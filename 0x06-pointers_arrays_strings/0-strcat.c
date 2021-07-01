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
int len = strlen(dest);
int len2 = strlen(src);
int s;
for (s = 0; s < (len + len2); s++)
{
dest[s + len] = src[s];
}
dest[len + len2] = 0;
return (dest);
}
