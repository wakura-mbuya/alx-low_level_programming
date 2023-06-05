#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: bytes to be copied
 *
 * Description: Copies n bytes from memory area src to memory area dest
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned long int k;

	for (k = 0; k < n; ++k)
	{
		*(dest + k) = *(src + k);
	}

	return (dest);
}
