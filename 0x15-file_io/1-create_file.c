#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file to read and print.
 * @text_content: string.
 *
 * Return: a new file
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		write(fd, text_content, i);
	}

	close(fd);
	return (1);
}

