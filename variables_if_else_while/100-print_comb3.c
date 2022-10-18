#include <stdio.h>

/**
 * main - main
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int maxi = 9;
	int inj = 0;

	for (i = 0; i <= maxi; i++)
	{
		for (j = inj; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i + 48);
				putchar(j + 48);

				if (i == 8 && j == 9)
					break;

				putchar(',');
				putchar(' ');
			}
		}
		inj++;
	}
	putchar('\n');
	return (1);
}
