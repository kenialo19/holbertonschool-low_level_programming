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
putchar(Alpha);
Alpha++;
}
Alpha = 65;
while (Alpha <= 90)
{
putchar (Alpha);
Alpha++;
}
putchar ('\n');
return (0);
}
