#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int Alpha = 97;

while (Alpha <= 122)
{
if (Alpha != 101 && Alpha != 113)
{
putchar(Alpha);
}
Alpha++;
}
putchar ('\n');
return (0);
}
