#include "main.h"

/**
 * print_rev - prints the input string in reverse
 * @s: The string to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int count = 0;	/* lenghth of the string */

	while (*s++) /* length of s*/
		count++;

	for (; count >= 0; count--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
