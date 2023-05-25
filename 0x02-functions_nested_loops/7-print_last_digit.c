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

	if (num < 0)
		last_digit = (num % 10) * -1;
	else
		last_digit = num % 10;
	_putchar((last_digit % 10) + '0');
	return (last_digit % 10);
}
