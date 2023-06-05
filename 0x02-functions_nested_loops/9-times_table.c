#include "main.h"
#include <stdio.h>

/**
 * printnumber - prints an integer using _putchar function
 * @n: the integer to be printed
 * Author: wakura-mbuya
 * Description: This function prints an integer in the range 0 - 100
 * using the _putchar function.
 * This function uses the definition of "printnumber(n)" function
 * written by user3858 on StackOverflow. Replaced the putchar(int n)
 * in the original function with _putchar(int n)
 * This function also modifies the original function
 * to be able to print upto 3 digits
 */
void printnumber(int n)
{
	/* for handling negative values of n*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* print 0 */
	if (n == 0)
	{
		_putchar('0');
	}
	/* print values of n 0 < n < 10 */
	else if ((n > 0) && (n < 10))
	{
		_putchar(n % 10 + '0');
	}
	/* print values of 10 <= n < 100 */
	else if ((n >= 10) && (n < 100))
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	/*print values on n >= 100 */
	else
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
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
			printtable(i * j);

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
