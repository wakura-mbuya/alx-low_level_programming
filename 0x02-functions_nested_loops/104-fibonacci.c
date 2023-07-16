#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/**
 * main - program entry point
 *
 * Description: This program finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * The numbers are separated by comma, followed by space
 * Return: 0 (success)
 */
int main(void)
{
	int64_t num1;
	int64_t num2;
	int64_t fib;
	int count;

	num1 = 1;
	num2 = 2;
	count = 2;

	printf("%" PRId64 ", %" PRId64 ", ", num1, num2);

	while (count < 99)
	{
		fib = num1 + num2;
		printf("%" PRId64, fib);
		count++;

		if (count == 98)
			printf("\n");
		else
			printf(", ");

		num1 = num2;
		num2 = fib;
	}
	return (0);
}
