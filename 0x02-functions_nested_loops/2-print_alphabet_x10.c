#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int Alpha, i;
for (i = 0; i <= 9; i++)
{
for (Alpha = 97; Alpha <= 122; Alpha++)
{
_putchar(Alpha);
}
_putchar ('\n');
}
}
