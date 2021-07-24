#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings.
 * @separator: string.
 * @n: unsigned integer.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *ptr;
va_list args;
va_start(args, n);
if (separator != NULL)
{
for (i = 0; i < n; i++)
{
ptr = va_arg(args, char *);
if (ptr == NULL)
{
printf("(nil)");
}
printf("%s", ptr);
if (i < (n - 1))
printf("%s", separator);
}
}
else
{
ptr = va_arg(args, char *);
printf("%s", ptr);
}
va_end(args);
printf("\n");
}
