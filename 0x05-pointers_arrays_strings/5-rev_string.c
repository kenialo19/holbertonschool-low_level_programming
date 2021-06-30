#include "holberton.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: string
 *
 * Return: void.
 */
void rev_string(char *s)
{
int t = 0;
int d;
char a;
char b;
while (s[t] != '\0')
{
t++;
}
t--;
for (d = 0; d < t; d++)
{
a = s[t];
b = s[d];
s[t] = b;
s[d] = a;
t--;
}
}
