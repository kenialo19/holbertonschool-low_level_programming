#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: count.
 * @argv: unused variable.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);
return (0);
}
