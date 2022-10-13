#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - printit
 *
 * @a: a
 * @size:
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumd1 = 0;
	int sumd2 = 0;

	for (i = 0; i < size; i++)
		sumd1 += a[i];

	for (i = (size - 1); i >= 0; i--)
		sumd2 += a[((size - 1) - i)];

	printf("%d, %d", sumd1, sumd2);


}
