#include "main.h"
/**
 * reverse_array - strcmp
 *
 * @a: a
 * @n: n
 *
 * Return: Number
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux;

	for (i = 0; i <= n && a[i] != '\0'; i++)
	{
		aux = a[i];
		a[i] = a[(n - i)];
		a[(n - i)] = aux;
	}
}
