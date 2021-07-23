#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: unsigned integer.
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int result = 0;
unsigned int i = 0;
va_list suma;
va_start(suma, n);
for (i = 0; i < n; ++i)
{
result += va_arg(suma, int);
}
va_end(suma);
if (n == 0)
{
return (0);
}
return (result);
}
