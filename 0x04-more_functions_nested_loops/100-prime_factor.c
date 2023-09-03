#include <stdbool.h>
#include <inttypes.h>
#include <math.h>
#include <stdio.h>
#include <stdint.h>

bool is_prime(int64_t);

/**
 * main - Entry point to the program
 *
 * Description: This program finds and prints the larges prime factor of
 * the number 612852475143, followed by a new line.
 * Return: Nothing
 */
int main(void)
{
	int64_t prime_fact;
	int64_t sqrt_integer, num_facts, num = 612852475143;
	double sqrt_result;

	/* Calculate the square root of the number */
	sqrt_result = sqrt((double)num);

	/* Convert the result back to int64_t */
	sqrt_integer = (int64_t)sqrt_result;
	prime_fact = 1;

	for (num_facts = sqrt_integer; num_facts >= 2; num_facts--)
	{
		if (num % num_facts == 0)
		{
			if (is_prime(num_facts))
			{
				prime_fact = num_facts;
				break;
			}
		}
	}

	printf("%" PRId64 "\n", prime_fact);

	return (0);
}

/**
 * is_prime - checks if a number is a prime number
 * @num: The number being checked if its prime
 *
 * Return: true if the num is prime, false otherwise
 */
bool is_prime(int64_t num)
{
	int64_t i;

	if (num <= 1)
		return (false); /* Numbers less than or equal to 1 are not prime */

	if (num <= 3)
		return (true); /* 2 and 3 are prime numbers*/

	if (num % 2 == 0 || num % 3 == 0)
		return (false); /* Numbers divisible by 2 or 3 are not prime */

	/* Check for prime by testing divisors up to the square root of the number */
	i = 5;

	while (i * i <= num)
	{
		if (num % i == 0 || num % (i + 2) == 0)
		{
			return (false);
		}
		i += 6; /*
			 *  Optimize for prime checking by
			 * skipping multiples of 2 and 3
			 */
	}
	return (true);
}
