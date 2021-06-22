#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - alphabetic character
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}
