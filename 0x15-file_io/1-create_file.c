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
	int fd, w_file;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 00600);
		close(fd);
		return (1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	while (text_content[i] != '\0')
		i++;

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	else
	{
		w_file = write(fd, text_content, i);
		if (w_file == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
