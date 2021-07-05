#include "holberton.h"
#include <string.h>


/**
 * *cap_string - capitalizes all words of a string.
 * @b: string
 *
 * Return: b.
 */
char *cap_string(char *b)
{
int d;
if (b[0] >= 'a' && b[0] <= 'z')
{
b[0] = b[0] - 32;
}
for(d = 0; b[d] != 0; d++)
{
switch (b[d])
{
case ',':
case ';':
case '.':
case ' ':
case '\n':
case '\t':
if(b[d + 1] > 96 && b[d + 1] < 123)
{
b[d + 1] = b[d + 1] - 32;
}         
}
}  
return (b); 
}
 
