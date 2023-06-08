#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line using recursion
 * @s: The string to be printed
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
