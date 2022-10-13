#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strins
 * @separator: string
 * @n: number of integers
 * @...: a variable number of integers to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	char *str;

	va_start(valist, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
