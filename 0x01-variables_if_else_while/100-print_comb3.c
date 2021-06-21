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
while (number <= 57)
{
num2 = number + 1;
while (num2 <= 57)
{
putchar(number);
putchar(num2);
if (number != 56)
{
putchar(',');
putchar(' ');
}
num2++;
}
number++;
}
putchar('\n');
return (0);
}
