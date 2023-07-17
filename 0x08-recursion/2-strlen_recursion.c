#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string passed
 *
 * Description: Returns the length of the string passed
 * using recursion
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
