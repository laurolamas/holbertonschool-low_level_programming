#include "main.h"
#include <stdio.h>

/**
 * print_array - aaaaaaa
 * @a: aaaaaaa
 * @n: nnnnnnn
 * Return: bbbbbbb
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i != (n-1))
			printf(", ");
	}

	_putchar('\n');
}
