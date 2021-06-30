#include "holberton.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: string
 *
 * Return: void.
 */
void rev_string(char *s)
{
char c[10];
char b;
int h, pos, f;
h = strlen(s);
pos = 0;
f = h - 1;
while (pos < h)
{
b = s[f];
c[pos] = b;
pos += 1;
f -= 1;
}
c[h] = '\0';
strcpy(s, c);
}

