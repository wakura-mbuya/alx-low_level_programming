#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: the maximum value the times table can compute
 *
 * Description: Prints the n times table, starting with 0
 * If n is greater than 15 or less than 0, the function
 * does not print anything
 */
void print_times_table(int n)
{
	int i, j, k, count, l;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k < 10)	/* print values of k (0 - 9) */
			{
				if (count > 0 && count < n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				printf("%d", k);
			}
			else if (k < 100)
			{
				if (count > 0 && count < n)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else
			{
				if (count > 0 && count < n)
					_putchar(' ');

				l = k % 100;
				_putchar('0' + k / 100);
				_putchar('0' + l / 10);
				_putchar('0' + l % 10);
			}
			count++;
			if (count <= n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
				count = 0;
			}
		}
	}
}
