#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: string
 * @cmp: a pointer
 * @size: size
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, a, cont = 0;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
a = cmp(array[i]);
cont = a + cont;
}
if (cont == 0)
{
return (-1);
}
return (cont);
}
