#include "function_pointers.h"

/**
 * array_iterator - executes a function.
 * @array: string
 * @action: a pointer
 * @size: size
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != 0 && action != 0)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
