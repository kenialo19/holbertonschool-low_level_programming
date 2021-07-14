#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: a pointer.
 */
char *_strdup(char *str)
{
int a = 0;
int b = 0;
char *h;
h = malloc(a* sizeof(char));
while (str[a] != '\0')
{
a++;
}
for (b = 0; b <= a; b++)
{
h[b] = str[b];
}
return (h);
}
