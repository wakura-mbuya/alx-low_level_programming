#include "main.h"

/**
 * power_operation - returns n to power c
 * @n: the number whose square root is to be obtained
 * @c: used for iterating
 * Return: thes n to power c
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}

	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Description: Returns the natural square root of a number
 * If the number does not have a natural square root, the function returns -1
 * Return: the natural square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
