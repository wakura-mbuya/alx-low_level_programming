#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 * @s: A pointer to the memory area
 * @b: The constant byte to be filled
 * @n: bytes being filled
 * Description: Fills the first n bytes of the memory area pointed
 * by s with the constant byte b
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		*(s + 1) = b;

	return (s);
}
