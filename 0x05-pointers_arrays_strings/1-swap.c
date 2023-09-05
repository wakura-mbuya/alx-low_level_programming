#include "main.h"

/**
 * swap_int - Swaps the values of two input integers
 * @a: the first integer
 * @b: the second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp_;

	temp_ = *a;
	*a = *b;
	*b = temp;
}
