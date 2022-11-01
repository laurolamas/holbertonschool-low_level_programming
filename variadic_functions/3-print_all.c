#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - Print all
 *
 * @format: format
 * Return: n
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	size_t i = 0;
	char *s;

	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(ptr, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				s = va_arg(ptr, char *),
				printf("%s", s = NULL ? "(nil)" : s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's') && format[(i + 1)])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
