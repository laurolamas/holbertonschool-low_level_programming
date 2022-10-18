#include <stdio.h>

/**
 * main - main
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int f1 = 0;
	long int f2 = 1;
	long int sum;

	printf("0, 1, ");

	for (i = 0; i < 49; i++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf("%ld", (sum));
		if (i != 48)
			printf(", ");
	}
	putchar('\n');
	return (0);
}


