#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int num);

/**
 * is_prime - checks if an integer is a prime number
 * @num: the number being checked
 *
 * Return: true if the number is a prime number
 * returns false otherwise
 */
bool is_prime(int num)
{
	int x; /* the square root of x */
	int i;	/* for loop iterator */

	x = (int)sqrt(num);
	for (i = 2; i <= x; i++)
		if (num % i == 0)
			return (false);
	return (true);
}

/**
 * main - program entry point
 *
 *
 * Return: 0 on success
 */
int main(void)
{
	long x;
	long y = 1, i;

	x = (long)sqrt(612852475143);
	for (i = 2; i <= x; i++)
	{
		if (is_prime(i))
			if (612852475143 % i == 0)
				y = i;
	}

	printf("%ld\n", y);
	return (0);
}
