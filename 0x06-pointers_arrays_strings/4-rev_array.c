#include "holberton.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: string
 * @n: whole
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int b;
int h;
for (b = 0; b < n ; b++)
{
h = a[b];
a[b] = a[n - 1];
a[n - 1] = h;
n--;
}
}
