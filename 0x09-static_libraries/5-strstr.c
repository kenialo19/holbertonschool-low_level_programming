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
if (*needle == 0)
{
return (haystack);
}
while (*haystack)
{
b = 0;
if (haystack[b] == needle[b])
{
do {
if (needle[b + 1] == '\0')
{
return (haystack);
}
b++;
} while (haystack[b] == needle[b]);
} haystack++;
}
return ('\0');
}
