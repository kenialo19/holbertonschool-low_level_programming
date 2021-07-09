#include "holberton.h"

/**
 * number - returns 1 if the input integer is a prime number.
 * @x: integer number.
 * @y: integer number
 *
 * Return: Always 0.
 */
int number(int x, int y)
{
if (x == y)
{
return (1);
}
if (x % y == 0)
{
return (0);
}
return (number(x, (y + 1)));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: integer number.
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n == 1 || n <= 0)
{
return (0);
}
return (number(n, 2));
}
