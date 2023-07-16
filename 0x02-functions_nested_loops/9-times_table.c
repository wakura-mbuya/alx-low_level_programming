#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int i, j;
	int k, count;

	count = 0;
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			k = i * j;

			if (k < 10)
			{
				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}

			count++;

			if (count <= 9)
			{
			_putchar(',');
			_putchar('  ');
			}
			else
			{
				_putchar('\n');
				count = 0;
			}
		}
	}
}
