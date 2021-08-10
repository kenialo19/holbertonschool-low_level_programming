#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: arguments
 * @argv: cantidad de arguments
 * Return: a integer.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes, bytes_1, closeff, closeft;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	bytes = read(file_from, buf, 1024);

	
}
