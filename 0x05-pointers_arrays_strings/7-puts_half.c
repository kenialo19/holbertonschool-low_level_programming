#include "holberton.h"
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: string
 *
 * Return: void.
 */
void puts_half(char *str)
{
int j, h, mitad;
j = (strlen(str));
mitad = j / 2;
for (h = mitad; h < j; h++)
{
_putchar(str[h]);
}
_putchar('\n');
}
