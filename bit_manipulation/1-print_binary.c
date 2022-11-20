#include "main.h"

/**
 * print_binary - print it
 * @n: n
 */

void print_binary(unsigned long int n)
{
	if (n / 2)
		print_binary(n / 2);

	 _putchar(n % 2 + '0');
}
