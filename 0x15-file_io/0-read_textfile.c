#include "main.h"
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file to read and print.
 * @letters: is the number of letters it should read and print.
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_file, w_file;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	r_file = read(fd, buf, letters);
	if (r_file == -1)
		return (0);

	w_file = write(STDOUT_FILENO, buf, r_file);
	if (w_file == -1)
		return (0);

	close(fd);
	free(buf);

	return (w_file);
}

