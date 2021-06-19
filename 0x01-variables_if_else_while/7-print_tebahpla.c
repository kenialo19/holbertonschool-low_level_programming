#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int Alpha = 122;

while (Alpha >= 97)
{
putchar(Alpha);
Alpha = Alpha - 1;
}
putchar('\n');
return (0);
}
