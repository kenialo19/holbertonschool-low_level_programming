#include "main.h"

/**
 * print_triangle - function that prints a triangle.
 * @size: is the size of the triangle.
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y + x > size)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
