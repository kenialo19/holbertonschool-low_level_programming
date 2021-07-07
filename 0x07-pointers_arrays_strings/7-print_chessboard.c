#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 *
 * Return: Always char*.
 * @a: is a variable char*.
 *
 */
void print_chessboard(char (*a)[8])
{
int x, b;
for (x = 0; x < 8 ; x++)
{
for (b = 0; b < 8; b++)
{
_putchar(a[x][b]);
}
_putchar('\n');
}
}
