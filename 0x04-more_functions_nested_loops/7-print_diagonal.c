#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number
 *
 * Return: void.
 */
void print_diagonal(int n)
{
int x, y;
for (x = 0; x < n; x++)
{
for (y = 1; y <= x; y++)
{
_putchar(' ');
}
_putchar(92);
_putchar ('\n');
}
if (n <= 0)
_putchar ('\n');
}
