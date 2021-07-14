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
int b;
char *h;
if (str == NULL)
{
return (NULL);
}
while (str[a] != '\0')
{
a++;
}
h = malloc((a + 1) * sizeof(char));
if (h == 0)
{
return (0);
}
for (b = 0; b <= a; b++)
{
h[b] = str[b];
}
return (h);
}
