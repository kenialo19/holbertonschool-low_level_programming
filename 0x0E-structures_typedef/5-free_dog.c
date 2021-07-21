#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: a structure dog
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
free(d);
}
