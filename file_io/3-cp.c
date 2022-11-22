#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * checkReturn - checkReturn
 * @returnValue: returnValue
 * @errorNumber: errorNumber
 * @stringToPrint: stringToPrint
 */
void checkReturn(int returnValue, int errorNumber, char *stringToPrint)
{
	if (returnValue != -1)
		return;

	switch (errorNumber)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;

		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", stringToPrint);
			exit(98);
			break;

		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", stringToPrint);
			exit(99);
			break;

		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", stringToPrint);
			exit(100);
			break;
	}
}

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 1 on success
 **/
int main(int argc, char *argv[])
{
	char *file_from;
	char *file_to;
	int f_from, f_to;
	char buffer[1024];
	int sz;

	if (argc != 3)
		checkReturn(-1, 97, NULL);

	file_from = argv[1];
	file_to = argv[2];

	f_from = open(file_from, O_RDWR);
	checkReturn(f_from, 98, file_from);

	f_to = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	checkReturn(f_to, 99, file_to);

	sz = read(f_from, buffer, 1024);
	checkReturn(sz, 98, file_from);

	sz = write(f_to, buffer, strlen(buffer));
	checkReturn(sz, 99, file_to);

	sz = close(f_from);
	checkReturn(sz, 100, "3");

	close(f_to);
	checkReturn(sz, 100, "4");

	return (1);
}
