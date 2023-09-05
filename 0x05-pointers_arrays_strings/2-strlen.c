#include "main.h"

/**
 * _strlen - computes the lenghth of a string
 * @s: pointer to the input string
 * Return: The number of characters in the string pointed to by s
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s++)
		count++;

	return (count);
}
