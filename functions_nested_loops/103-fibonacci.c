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
	long int sum = 0;
	long int fib = 0;

	for (i = 0; i < 32; i++)
	{
		fib = f1 + f2;
		f1 = f2;
		f2 = fib;
		if (fib % 2 == 0)
			sum += fib;
	}
	printf("%ld\n", (sum));
	return (0);
}


