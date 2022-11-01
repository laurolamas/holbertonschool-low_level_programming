#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
 * print_all - Print all
 *
 * @format: format
 * Return: n
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0;
	bool printedSomething = false;

	if (!format)
		return;
	va_start(ptr, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				printedSomething = true;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				printedSomething = true;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				printedSomething = true;
				break;
			case 's':
				printf("%s", va_arg(ptr, char *));
				printedSomething = true;
				break;
		}
		if (format[i + 1] && printedSomething)
		{
			printf(", ");
			printedSomething = false;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
