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
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (strtol(argv[i], NULL, 10) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += strtol(argv[i], NULL, 10);
	}

	printf("%d\n", sum);
	return (0);
}
