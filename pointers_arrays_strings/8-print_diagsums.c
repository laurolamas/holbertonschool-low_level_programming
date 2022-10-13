#include "main.h"
#include <stdio>

/**
 * print_diagsums - printit
 *
 * @a: a
 * @size
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	sumd1;
	sumd2;

	for (i = 0; i < n; i++)
		sum1 += a[i][i];
	
	for (i = (n-1); i >= 0; i--)
		sum2 += a[(n - 1) -i][i];
	
	printf("%d, %d",sum1,sum2)


}
