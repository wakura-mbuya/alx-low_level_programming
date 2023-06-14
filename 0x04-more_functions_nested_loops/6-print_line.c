#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The length of the line
 *
 * Description: Draws a straight line in the terminal
 * n specifies the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; ++i)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
