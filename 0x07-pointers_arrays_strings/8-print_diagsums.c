#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 *  print_diagsums - the sum of the two diagonals
 *
 * Return: Always char*.
 * @a: is a variable char*.
 * @size: size
 */
void print_diagsums(int *a, int size)
{
int r;
int h = 0;
int b = 0;
int f = size * size;
for (r = 0; r < f; r += size + 1)
{
h += a[r];
}
for (r = size - 1; r < f - 1; r += size - 1)
{
b += a[r];
}
printf("%d, %d\n", h, b);
}
