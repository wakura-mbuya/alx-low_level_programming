#include "main.h"

/**
 * jack_bauer - prints every minute of the day (00:00 to 23:59)
 *
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			for (k = 0; k < 6; k++)
				for (l = 0; k < 10; k++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar("\n");
				}
}

