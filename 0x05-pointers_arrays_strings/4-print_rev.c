#include "holberton.h"
#include <string.h>

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string
 *
 * Return: void.
 */
void print_rev(char *s)
{
int h, x;
h = strlen(s);
for (x = h - 1; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
