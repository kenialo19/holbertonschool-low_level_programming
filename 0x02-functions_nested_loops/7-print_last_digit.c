#include "holberton.h"
#include <stdlib.h>
#include <math.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @x: last digit
 *
 * Return: Always 0.
 */
int print_last_digit(int x)

{
int digit;
int resultado;
digit = x % 10;
resultado = abs(digit); 
_putchar('0' + resultado);
return (resultado);
}
