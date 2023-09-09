#include "main.h"

/**
 * _puts - prints a string to the console followed by a new line
 * @str: the string to be printed
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
