#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num1, num2, num3, num4;
int bandera1 = 0;
int bandera2 = 0;
for (num1 = 48; num1 <= 57; num1++)
{
bandera1 = 1;
for (num2 = 48; num2 <= 57; num2++)
{
bandera1 = 1;
bandera2 = 1;
for (num3 = 48; num3 <= 57; num3++)
{
if (bandera1 == 1)
num3 = num1;
for (num4 = 48; num4 <= 57; num4++)
{
if (bandera2 == 1)
num4 = num2 + 1;
if (num4 <= 57)
{
putchar(num1);
putchar(num2);
putchar(' ');
putchar(num3);
putchar(num4);
if (num1 != 57 || num2 != 56)
{
putchar(',');
putchar(' ');
}
}
bandera2 = 0;
}
bandera1 = 0;
}
}
}
putchar('\n');
return (0);
}
