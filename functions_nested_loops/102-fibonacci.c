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

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf("%ld", (sum));
		if (i != 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}


