#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int n, len = 0;
	char *ptr = str;

	while (*str++)
		len++;

	n = (len - 1) / 2;
	ptr += (n);

	while (*ptr++)
		_putchar(*ptr);
	_putchar('\n');
}
