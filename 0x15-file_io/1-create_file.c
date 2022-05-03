#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: contents of the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (0);

	if (text_content == NULL)
		wr = write(fd, "\0", 1);
	else
		wr = write(fd, text_content, strlen(text_content) + 1);

	if (wr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
