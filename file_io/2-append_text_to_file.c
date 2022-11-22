#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * append_text_to_file - append_text_to_file
 * @filename: filename
 * @text_content: text_content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, sz;

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (0);

	sz = write(fd, text_content, strlen(text_content));

	if (sz == -1)
		return (0);

	close(fd);

	return (1);
}
