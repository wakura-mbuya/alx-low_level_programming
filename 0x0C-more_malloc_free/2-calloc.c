#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: the size of each element of the array
 *
 * allocates memory for an array and initializes the elements to 0
 * Return: pointer to the array on success,
 * otherwise returns NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;	/* for loop iteration */
	char *nums;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nums = malloc(nmemb * size);
	if (nums == NULL)
		return (NULL); /* malloc failed */

	for (i = 0; i < (nmemb * size); i++)
		nums[i] = 0;
	return (nums);
}
