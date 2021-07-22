#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name.
 * @name: string.
 * @f: a pointer function
 *
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f != NULL)
{  
f(name);
}
}
