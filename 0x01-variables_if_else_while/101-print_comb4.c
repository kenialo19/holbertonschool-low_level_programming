#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int number = 48;
int num2;
int num3;
while (number <= 57)
{
num2 = number + 1;
while (num2 <= 57)
{
for (num3 = num2 + 1; num3 <= 57; num3++)
{
putchar(number);
putchar(num2);
putchar(num3);
if (number != 55)
{
putchar(',');
putchar(' ');
}
}
num2++;
}
number++;
}
putchar('\n');
return (0);
}
