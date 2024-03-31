#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - followed by a new line
 * @separator: string to be printed between the numbers
 * @n: the count of integers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int k;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		k = va_arg(args, int);
		if (separator)
			printf("%d%s", k, separator);
		else
			printf("%d", k);
	}
	k = va_arg(args, int);
	printf("%d\n", k);
	va_end(args);
}
