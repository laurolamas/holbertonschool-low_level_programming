#include "main.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *file_from;
	char *file_to;
	int f_from, f_to;
	char buffer[1024];
	int sz;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	f_from = open(file_from, O_RDWR);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	f_to = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (f_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        exit(98);
    }

	sz = read(f_from, buffer, 1024);
		if (sz == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

	dprintf(f_to, "%s", buffer);
/**	sz = write(f_to, buffer, strlen(buffer));

	if (sz == -1)
		return (0);
*/	
	return (1);
}
