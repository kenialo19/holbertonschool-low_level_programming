#include "holberton.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the character cheker
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
return (0);
}
