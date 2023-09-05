#include "main.h"

/**
 * print_triangle - prints a triangle followed b a new line
 * @size: The size of triangle
 *
 * Description: Prints a triangle followed by a new line
 * If size of the triangle is 0 or les, the function prints only a new line
 * The function uses the character # to print the triangle.
 * The function uses the _putcha(char) function to print
 * Return: Nothing
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				z = size - x - 1;
				if (y < z)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
