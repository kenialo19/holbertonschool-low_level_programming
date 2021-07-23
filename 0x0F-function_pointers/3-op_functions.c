#include "3-calc.h"

/**
 * op_add - sum
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - sub
 * @a: integer
 * @b: integer
 *
 * Return: a integer
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - mul
 * @a: integer
 * @b: integer
 *
 * Return: a integer
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - div
 * @a: integer
 * @b: integer
 *
 * Return: a integer
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - mod
 * @a: integer
 * @b: integer
 *
 * Return: a integer
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
