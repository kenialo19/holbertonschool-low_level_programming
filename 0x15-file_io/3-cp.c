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

	if (file_from < 0 || bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close from file %s\n", argv[1]);
		exit(98);
	}

	if (argv[2])
	{
		file_to = open(argv[2], O_CREAT | O_WRONLY, 0664);
	}
	else
	{
		file_to = open(argv[2], O_WRONLY | O_TRUNC);
	}
	bytes_1 = write(file_to, buf, bytes);
	if (file_to < 0 || bytes_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error Can't write to %s\n", argv[2]);
		exit(99);
	}
	else
		closeff = close(file_from);
	if (closeff < 0)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %d\n", file_from);
		exit(100);
	}
	closeft = close(file_to);
	if (closeft < 0)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %d\n", file_to);
		exit(100);
	}

	return (1);
}
