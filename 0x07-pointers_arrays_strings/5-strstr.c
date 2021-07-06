#include "holberton.h"

/**
 * *_strstr - locates a substring.
 *
 * Return: Always char*.
 * @haystack: is a variable char*.
 * @needle: is a variable char*.
 */
char *_strstr(char *haystack, char *needle)
{
int x, b;
for (x = 0; x < haystack; x++)
{
for (b = 0; b < needle; b++)
{
if (haystack[x] == needle[b])
{
return (needle + x);
}
}
} return (0);
}
