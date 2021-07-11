#include "holberton.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: string
 * @s2: string
 *
 * Return: valor.
 */
int _strcmp(char *s1, char *s2)
{
int valor = 0;
if (s1 < s2)
{
valor = -1;
}
else if (s1 > s2)
{
valor = 1;
}
else
{
valor = 0;
}
return (valor);
}
