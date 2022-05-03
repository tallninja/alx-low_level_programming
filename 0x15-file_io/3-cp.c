#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number of argv
 * @argv: arguments
 * Return: 0 on success, number of error on failure
 */

int main(int argc, char *argv[])
{
	ssize_t wr, rd;
	int fd, fd_2, cl;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(argv[1], O_RDONLY); /* open file from */
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664); /*open file to*/
	if (fd_2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),	exit(99);

	while (rd > 0)
	{
	rd = read(fd, buf, 1024);
	if (rd == -1)
	{	dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		return (0); }
	wr = write(fd_2, buf, rd);
	if (wr == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),  exit(99);
		return (0); }
	}
	cl = close(fd);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	cl = close(fd_2);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2), exit(100);
	return (0);
}
