#include "variadic_functions.h"

/**
 * sum_them_all - computes the sum of all the parameter of the program
 * @n: number of arguments
 *
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (k = 0; k < n; k++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
