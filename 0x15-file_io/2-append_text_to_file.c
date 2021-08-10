#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file to read and print.
 * @text_content: string.
 *
 * Return: a integer.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_file, i = 0;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[i])
		i++;

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	w_file = write(fd, text_content, i);
	if (w_file == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
