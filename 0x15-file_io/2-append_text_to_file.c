#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: filename
 * @text_content: content to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wb;
	int fd;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		wb = write(fd, text_content, strlen(text_content));
		if (wb == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
