#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer list.
 * @index: is the index, starting from.
 *
 * Return: always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * (sizeof(n)))
	{
		return (-1);
	}
	*n &= (~1 << index);
	return (1);
}
