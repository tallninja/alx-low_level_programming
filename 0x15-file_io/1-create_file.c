#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: contents of the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t wr;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
