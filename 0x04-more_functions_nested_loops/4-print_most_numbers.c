#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: void.
 */
void print_most_numbers(void)
{
int num = 48;
while (num <= 57)
{
if ((num != 50) && (num != 52))
{
_putchar(num);
}
num++;
}
_putchar ('\n');
}
