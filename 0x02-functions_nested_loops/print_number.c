#include "main.h"

/**
 * printnumber - prints integers (3 digit integers)
 * @n: the integer to be printed
 * Return: nothing
 */
void printnumber(int n)
{
	int k;

	/* for handling negative values */
	if (n < 0)
	{
		_putchar('-');
	}

	/* for ints 0-9 */
	if (n < 10)
	{
		_putchar('0' + n % 10);
	}
	else if (n < 100)
	{
		/* for ints 10 - 99 */
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		/* for ints 100 and above */
		k = n % 100;
		_putchar('0' + n / 100);
		_putchar('0' + k / 10);
		_putchar('0' + k % 10);
	}
}
