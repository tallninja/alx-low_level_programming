#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: filename
 * @letters: number of letters in the file
 * Return: letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, letters_read, letters_wrote, buff_size = letters;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1) /* file could not be opened */
		return (0);

	buff = (char *) malloc(sizeof(char) * buff_size + 1);
	if (buff == NULL)
		return (0);

	letters_read = read(fd, buff, buff_size);
	if (letters_read == -1)
		return (0);

	buff[buff_size] = '\0';

	letters_wrote = write(STDOUT_FILENO, buff, buff_size);
	if (letters_wrote < buff_size)
		return (0);

	close(fd); /* close the file upon completion */
	return (letters_read);
}
