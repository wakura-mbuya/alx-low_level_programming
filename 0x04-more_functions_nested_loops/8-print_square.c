#include "main.h"

/**
 * print_square - print a square, followed by a new line
 * @size: The size of the square to be printed
 * 
 * Description: Prints a square followed by a new line
 * Only uses the _putchar function to print
 * Where size is the size of the square
 * if size is 0 or less, the function prints only a new line
 * The function uses the character # to print the square
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; ++j)
			{
				_putchar('#');
			}
			_putchar('#');
		}
	}
