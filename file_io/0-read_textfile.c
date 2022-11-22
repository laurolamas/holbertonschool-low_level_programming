#include "main.h"

/**
 * read_textfile - Read
 * @filename: filename
 * @letters: letters
 * Return: sixe_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int ret;
	int readd;
	char *buffer = NULL;

	fd = open(filename, O_RDWR);

	if (fd == -1 || !filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	readd = read(fd, buffer, letters);

	if (readd == -1)
		return (0);

	ret = write(STDOUT_FILENO, buffer, readd);


	free(buffer);

	close(fd);

	return (ret);

}
