#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: the character cheker
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
return (0);
}
