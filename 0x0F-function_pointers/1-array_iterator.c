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
unsigned int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
