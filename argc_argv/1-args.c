#include <stdio.h>

/**
 * main - main
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int n = 0;

	n = argc - 1;

	printf("%d\n", n);
	return (0);
}
