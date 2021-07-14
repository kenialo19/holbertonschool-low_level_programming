#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 *
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
int a = 0;
int b = 0;
int i;
char *y;
if (s1 != NULL)
{
while (s1[a] != '\0')
{
a++;
}
}
if (s2 != NULL)
{
while (s2[b] != '\0')
{
b++;
}
}
y = malloc((a + b + 1) * sizeof(char));
if (y == 0)
{
return (0);
}
for (i = 0; i < a + b; i++)
{
if (i < a)
{
y[i] = s1[i];
}
else
{
y[i] = s2[i - a];
}
}
return (y);
}
