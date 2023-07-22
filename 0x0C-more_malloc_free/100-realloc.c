#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block that was allocated by malloc
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated memory
 * @new_size: the size in byes of the new memory block
 *
 * Return: pointer the memory block (ptr) on success
 * if new_size is equal to old_size, return ptr without changes
 * if malloc fails, return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
