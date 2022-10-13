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

	for (i = 0; i < ((size*size) - 1); i += (size+1))
		sumd1 += a[i];

	for (i = (size - 1); i <= (size * (size - 1)); i += (size-1))
		sumd2 += a[i];

	printf("%d, %d", sumd1, sumd2);


}
