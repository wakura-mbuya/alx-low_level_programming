#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The first integer (the base)
 * @y: The index of y
 *
 * Description: Returns the value of x raised to the power of y
 * if y is lower than 0, the function returns -1
 * Return: x raised to power y(x ^ y)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);
	return (_pow_recursion(x * x, y - 1));
}
