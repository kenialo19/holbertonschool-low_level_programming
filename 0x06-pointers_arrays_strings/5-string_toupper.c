#include "holberton.h"
#include <string.h>

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @h: string
 *
 * Return: h.
 */
char *string_toupper(char *h)
{
int r;
for (r = 0; h[r] != 0; r++)
{
if (h[r] >= 97 && h[r] <= 122)
{
h[r] = h[r] - 32;
}
}
return (h);
}
