#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: the string to be printed
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
		return;

	_putchar(s);
	_puts_recursion(s + 1);
}
