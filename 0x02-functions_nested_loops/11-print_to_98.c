#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: the first number to be printed
 *
 * Description: prints all natural numbers from n to 98, followed by a new line
 * Numbers printed separated by a comma, followed by a space
 * Numbers are printed in order
 * The number printed first is th number passed to the function
 * Last number printed is 98
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printnumber(98);
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printnumber(i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printnumber(i);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
