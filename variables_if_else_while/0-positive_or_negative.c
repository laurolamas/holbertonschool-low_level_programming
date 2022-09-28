#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - akdjfbkaejf
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		Printf("%d is zero\n", n);
	}
	else
	{
		if (n > 0)
		{
			Printf("%d is positive\n", n);
		}
		else
		{
			Printf("%d is negative\n", n);
		}

	}
	return (0);
}
