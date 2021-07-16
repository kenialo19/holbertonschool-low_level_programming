#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - oncatenates two strings.
 * @s1: string
 * @s2: string
 * @n: integer
 *
 * Return: a pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i =  0;
unsigned int j = 0;
unsigned  int k;
char *b;
if (s1 != NULL)
{
while (s1[i] != '\0')
{
i++;
}
}
if (s2 != NULL)
{
while (s2[j] != '\0')
{
j++;
}
}
if (n > j)
{
n = j;
}
b = malloc((i + n + 1) * sizeof(char));
if (b == 0)
{
return (0);
}
for (k = 0; k < i + n; k++)
{
if (k < i)
{
b[k] = s1[k];
}
else
{
b[k] = s2[k - i];
}
}
b[k] = '\0';
return (b);
}
