#include "variadic_functions.h"
#include <stdargh>

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;

	va_list args;
	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		int arg =va_arg(args, int);
		total += arg;
	}

	va_end(args);

	return (total);
}
