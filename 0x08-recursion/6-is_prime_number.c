#include "main.h"

/**
 * is_prime - checks if the input number is a prime number
 * @n: the input number
 * @c: used for iterating
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}

	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number being checked
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
