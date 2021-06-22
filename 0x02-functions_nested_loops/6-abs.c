#include <math.h>
#include <stdlib.h>
/**
 * int _abs - computes the absolute value of an integer.
 * @int: absolute value
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int x)
{
int resultado;
resultado = abs(x);
return (resultado);
}
