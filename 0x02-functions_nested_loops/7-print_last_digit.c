#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number whose last digit is to be printed
 *
 * Return: The last digit of num
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	_putchar(last_digit + '0');

	if (num < 0)
		return (last_digit* -1);
	else
		return (last_digit);
}
