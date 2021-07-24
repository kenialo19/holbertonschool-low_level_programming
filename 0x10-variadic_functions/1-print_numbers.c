#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: string
 * @n: unsigned integer.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
if (separator != NULL)
{
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
if (i < (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(list);
}
}
