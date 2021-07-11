#include "holberton.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 * @c: the character cheker
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
return (0);
}
