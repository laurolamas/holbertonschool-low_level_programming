#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;
	int mul = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	x = strtol(argv[1], NULL, 10);
	y = strtol(argv[2], NULL, 10);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
