#include "holberton.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: string
 *
 * Return: void.
 */
void puts2(char *str)
{
int x, k;
k = strlen(str);
for (x = 0; x < k; x += 2)
{
_putchar(str[x]);
}
_putchar('\n');
}
