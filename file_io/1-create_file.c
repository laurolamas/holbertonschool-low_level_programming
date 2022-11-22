#include "main.h"
#include <string.h>
/**
 * create_file - Create file
 * @filename: filename
 * @text_content: text content
 * Return: 1 on succes
 */
int create_file(const char *filename, char *text_content)
{
	int fd, sz;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return(1);

	sz = write(fd, text_content, strlen(text_content));

	if (sz == -1)
		return (-1);

	close(fd);

	return (1);
}
