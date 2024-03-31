#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of values to be added
 * Return: sum of all parameters
 * if n is 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int k, sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		k = va_arg(args, int);
		sum += k;
	}

	va_end(args);

	return (sum);
}
