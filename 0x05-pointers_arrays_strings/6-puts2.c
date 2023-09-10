#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int true = 1;

	while (true)
	{
		if (*str == '\0')
			if (*(str + 1) == '\0')
				break;
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
