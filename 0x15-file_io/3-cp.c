#include "main.h"
#include <fcntl.h>

/**
 * main - program that copies the content.
 * of a file to another file.
 * @argc: Number arg
 * @argv: args
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int r_file_f = 0, w_file = 0;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		 exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		r_file_f = read(file_from, buf, 1024);
		if (r_file_f == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w_file = write(file_to, buf, r_file_f);
		if (w_file == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (r_file_f == 1024);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
