#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Sum them all
 *
 * @n: n
 * @s: s
 * Return: n
 */
void print_numbers(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i < (n - 1) && s)
			printf("%s", s);
	}

	printf("\n");

	va_end(ptr);
}
