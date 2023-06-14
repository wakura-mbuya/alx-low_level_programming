#include <stdio.h>

/**
 * fizzbuzz - prints the Fizz-Buzz test
 *
 * Description: Prints the Fizz-Buzz test
 * The function prints the numbers from 1 to 100, followed by a new line
 * For multiples of 3, the function prints Fizz instead of the number
 * For multiples of 5, the function prints 5 instead of the number
 * For numbers which are multiples of both  and 5, the function prints FizzBuzz
 *
 * Return: nothing
 */

void fizzbuzz(void)
{
	int i;

	for (i = 1; i < 101; ++i)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
}

/**
 * main - The entry point to the program
 * Return: 0 (Success)
 */

int main(void)
{
	fizzbuzz();
	return (0);
}
