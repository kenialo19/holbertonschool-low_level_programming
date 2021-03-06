#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: count the lines argument.
 * @argv: arguments vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int a, b, result;
char *operator = NULL;
int (*f)(int a, int b);
if (argc > 4 || argc < 4)
{
printf("Error\n");
exit(98);
}
operator = argv[2];
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(operator);
if (!f)
{
printf("Error\n");
exit(99);
}
result = f(a, b);
printf("%d\n", result);
return (0);
}
