#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	if (a > b)
		if (b > c)
			return (a);
	if (b > a)
		if (a > c)
			return (b);
	if (c > a)
		if (b > c)
			return (c);
	return (a);
}
