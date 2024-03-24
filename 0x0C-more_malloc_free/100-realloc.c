#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: Existing memory block
 * @old_size: the size in bytes of the existing block
 * @new_size: the new size in bytes of the new memory block
 *
 * Return: pointer the new memory block on success
 * returns NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *src, *dest;
	unsigned int i;

	if (new_size > old_size)
	{
		src = (char *)ptr;
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		dest = new_ptr;
		for (i = 0; i < old_size; i++)
			dest[i] = src[i];
		free(ptr);
		return (new_ptr);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (NULL);	/* ideally this should not happen */
}
