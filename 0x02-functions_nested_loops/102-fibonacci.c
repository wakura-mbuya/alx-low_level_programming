#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: Prints the first 50 Fibonnaci numbers
 * starting with 1 and 2, followed by a new line
 * The numbers are separated by a comma, followed by a space
 * Return: 0 (success)
 */
int main(void)
{
	long int num1, fib, num2;
	int count;

	num1 = 1;
	num2 = 2;

	printf("%ld, %ld, ", num1, num2);
	count = 2;

	while (count < 50)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		printf("%ld", fib);
		count++;

		if (count < 50)
			printf(", ");
	}

	printf("\n");

	return (0);
}
