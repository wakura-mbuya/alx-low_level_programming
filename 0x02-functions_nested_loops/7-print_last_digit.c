#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number whose last digit is to be printed
 *
 * Return: The last digit of num
 */
int print_last_digit(int num)
{
	printf("%d", num % 10);
	return (num % 10);
}
