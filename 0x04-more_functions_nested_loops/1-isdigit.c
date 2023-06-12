#include "main.h"

/**
 * _isdigit - Checks if the input character is a digit
 * @c: The ASCII value of the input character
 * Return: 1 if the c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
