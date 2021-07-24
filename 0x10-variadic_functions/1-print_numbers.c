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
va_list list;
va_start(list, n);
if (separator != NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
if (i < (n - 1))
printf("%s", separator);
}
}
else
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
}
}
va_end(list);
printf("\n");
}
