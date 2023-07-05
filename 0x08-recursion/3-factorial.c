#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The number whose factorial is to be calculated
 *
 * Description: Return the factorial of a number
 * if n is lower than 0, the returns -1 indicating an error
 * Factorial of 0 is 1
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
