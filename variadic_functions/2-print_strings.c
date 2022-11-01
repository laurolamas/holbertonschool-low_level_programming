#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Sum them all
 *
 * @n: n
 * @separator: s
 * Return: n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ptr);
}
