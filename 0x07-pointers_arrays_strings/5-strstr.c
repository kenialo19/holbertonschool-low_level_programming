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
for (x = 0; haystack[x] != '\0'; x++)
{
for (b = 0; needle[b] != '\0'; b++)
{
if (haystack[x] == needle[b])
{
return (haystack + b + 4);
}
}
} return (0);
}
