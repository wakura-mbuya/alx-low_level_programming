#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings passed
 * @separator: characters separating the strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if (arg)
			printf("%s", arg);
		else
			printf("nil");

		if (i != n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
