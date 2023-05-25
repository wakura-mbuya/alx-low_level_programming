#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int i, j, count;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar((i * j) + '0');
			if (count % 10)
			{
			_putchar(',');
			_putchar(' ');
			}
			else
				_putchar('\n');
		}
		_putchar('\n');
	}
}
