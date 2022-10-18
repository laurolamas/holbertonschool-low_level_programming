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
	int k;

	for (i = 0; i <= 7; i++)
		for (j = i + 1; j <= 8; j++)
			for (k = j + 1; k <= 9; k++)
				if (i != j && i != k && j != k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if ((i + j + k) == 24)
						break;
					putchar(',');
					putchar(' ');
				}
	putchar('\n');
	return (0);
}
