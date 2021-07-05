#include "holberton.h"
#include <string.h>

/**
 * *leet - encodes a string into 1337.
 * @k: string
 *
 * Return: k.
 */
char *leet(char *k)
{
int h, d;
char p[] = "AaEeOoTtLl";
char w[] = "4433007711";
for (h = 0; k[h]; h++)
{
for (d = 0; d < 10; d++)
{
if (k[h] == p[d])
{
k[h] = w[d];
}
}
}
return (k);
}
