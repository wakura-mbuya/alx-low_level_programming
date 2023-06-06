#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: The source (original pointer)
 * @to: The target address
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
