#include "holberton.h"
#include <stdlib.h>

/**
 * root - returns the natural square root of a number.
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */
int root(int x, int y)
{
int a = y * y;
if (a == x)
{
return (y);
}
if (a > x)
{
return (-1);
}
return (root(x, y + 1));
}

/**
 *  _sqrt_recursion -  returns the natural square root of a number.
 * @n: integer
 *
 * Return: integer.
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (root(n, 1));
}
