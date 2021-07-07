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
int b;
for (b = 0; haystack[b] != '\0'; b++)
{
if (haystack[b] == needle[0])
{
return (haystack + b);
}
}
return (0);
}

