#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy -  copies the string pointed, including the terminating null byte
 * @src: array source
 * @dest: array destiny
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x;

	while (src[i] != '\0')
	{
		i++;
	}
	x = i;
	for (i = 0; i <= x; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
