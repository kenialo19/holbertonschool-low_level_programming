#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int x;
for (x = 0; x < n; x++)
{
_putchar('_');
}   
_putchar ('\n');
}
