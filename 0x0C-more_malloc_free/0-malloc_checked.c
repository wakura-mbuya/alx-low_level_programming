#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of space to be allocated
 *
 * Return: the pointer to the memory allocate if the function runs successfully
 * If malloc fails to allocate memory, the program exits with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
