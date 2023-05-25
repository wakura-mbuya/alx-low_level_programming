#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer whose absolute value is being checked
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

