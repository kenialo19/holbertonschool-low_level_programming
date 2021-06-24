#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int n, s, d;

for (n = 0; n <= 9; n++)
{
for (s = 0; s <= 9; s++)
{
d = n * s;
if (d <= 9)
{
if (s != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(d + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
}
_putchar('\n');
}
}
