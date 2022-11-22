#include "main.h"
#include <string.h>
/**
 */
int create_file(const char *filename, char *text_content)
{
        int fd, sz;

        fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

        if (fd == -1)
                return (0);

        sz = write(fd, text_content, strlen(text_content));

		if (sz == -1)
			return (0);

        close(fd);

        return (1);
}
