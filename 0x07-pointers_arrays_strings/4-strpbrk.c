#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 *
 * Return: Always char*.
 * @s: is a variable char*.
 * @accept: is a variable char*.
 */
char *_strpbrk(char *s, char *accept)
{
int k, h;
for (k = 0; s[k] != '\0'; k++)
{
for (h = 0; accept[h] != '\0'; h++)
{
if (s[k] == accept[h])
{
return (s + k);
}
}
} return (0);
}
