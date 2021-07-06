#include "holberton.h"
#include <string.h>

/**
 * _strspn - check the code for Holberton School students.
 *
 * Return: Always char*.
 * @s: is a variable char*.
 * @accept: is a variable char*.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, bool;
for (i = 0; s[i] != '\0'; i++)
{
bool = 1;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (i);
}
