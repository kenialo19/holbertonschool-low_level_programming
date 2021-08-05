#include "main.h"
#include <stdio.h>


/**
 * print_binary - prints the binary representation of a number.
 * @n:
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
		putchar((n % 2) + '0');
}
