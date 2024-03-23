#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to the allocated memory if success
 * Otherwise exits with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n)
		return (n);
	free(n);
	exit(98);
}
