#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: unused variable.
 * @argv: unused variable.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int x1, x2, x;
if (argc == 3)
{
x1 = atoi(argv[1]);
x2 = atoi(argv[2]);
x = x1 *x2;
printf("%d\n", x);
}
else
{
printf("error\n");
return (-1);
}
return (0);
}
