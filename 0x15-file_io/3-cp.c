#include "main.h"
#include <fcntl.h>

/**
 * main - copies the content of a file to another file.
 * @argc: arguments
 * @argv: cantidad de arguments
 * Return: a integer.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r_file_f, w_file, close_ff, close_ft;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	r_file_f = read(file_from, buf, 1024);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	w_file = write(file_to, buf, r_file_f);
	if (w_file == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_to);
			exit(99);
	}
	close_ff = close(file_from);
	if (close_ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_ff);
		exit(100);
	}
	close_ft = close(file_to);
	if (close_ft < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_ft);
		exit(100);
	}
	return (1);
}
