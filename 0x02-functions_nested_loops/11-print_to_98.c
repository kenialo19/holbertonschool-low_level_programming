#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number given
 *
 * Return: void.
 */
void print_to_98(int n)
{
int x;
for (x = n; x > 98; x--)
{
printf("%d", x);
printf(", ");
}
for (x = n; x < 98; x++)
{
printf("%d", x);
printf(", ");
}
printf("98");
printf("\n");
}
