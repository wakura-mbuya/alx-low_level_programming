#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - uses malloc to allocate memory
 * @b: bytes to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
		return (ptr);
	exit(98);
}
