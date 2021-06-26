#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void.
 */
void more_numbers(void)
{
int n, t;
for (n = 0; n <= 9; n++)
{
for (t = 0; t <= 14; t++)
{
if (t > 9)
{
_putchar((t / 10) + '0');
}
_putchar((t % 10) + '0');
}
_putchar ('\n');
}
}
