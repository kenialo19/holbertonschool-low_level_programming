#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * @int: number
 *
 * Return: void.
 */
void print_numbers(void)
{
int num = 48;

while (num <= 57)
{
_putchar(num);
num++;
}
_putchar('\n');
}
