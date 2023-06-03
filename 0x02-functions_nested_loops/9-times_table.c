#include "main.h"
#include <stdio.h>

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
			printf("%d", i*j);
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
