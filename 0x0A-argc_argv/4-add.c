#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: count the lines argument
 * @argv: arguments vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int z, a, result;
for (z = 1; z < argc; z++)
{
for (a = 0; argv[z][a]; a++)
{
if (argv[z][a] < '0' || argv[z][a] > '9')
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[z]);
}
printf("%d\n", result);
return (0);
}
