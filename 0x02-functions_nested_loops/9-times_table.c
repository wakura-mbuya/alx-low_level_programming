#include "main.h"
#include <stdio.h>

/**
 * printnumber - prints an integer using _putchar function
 * @n: the integer to be printed
 * Author: user3858 on stackoverflow
 * Replaced the putchar(int n) in the original function with _putchar(int in)
 */
void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	if (n / 10)
	{
		printnumber(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int i, j, count;

	count = 0;
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			_putchar(i * j);

			if (count < 10)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
		count++;
	}
}
