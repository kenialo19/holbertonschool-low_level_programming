#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip.
 * to get from one number to another.
 * @n: pointer list.
 * @m: is the index, starting from.
 *
 * Return: always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, i = (sizeof(n) * 8 - 1);

	for (; i >= 0; i--)
	{
		if ((((m ^ n) >> i) & 1) == 1)
			count++;
	}
	return (count);
}
