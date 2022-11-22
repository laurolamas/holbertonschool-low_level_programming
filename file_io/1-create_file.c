#include "main.h"
#include <string.h>
/**
 */

int create_file(const char *filename, char *text_content)
{
        int fd;

        fd = open(filename, O_CREAT | O_TRUNC, 0600);

        if (fd == -1)
                return (0);

        write(fd, text_content, sizeof(text_content));

        close(fd);

        return (1);
}

/**
int create_file(const char *filename, char *text_content)
{
	int fd, sz;
	char *buffer;

	fd = open(filename, O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * sizeof(text_content));

	if (!buffer)
		return (0);

	sz = read(fd, buffer, sizeof(text_content));

	if (sz == -1)
		return (0);

	sz = write(fd, text_content, sizeof(text_content));

	close(fd);
	free(buffer);

	return (1);
}
*/
