#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: the character cheker
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}
