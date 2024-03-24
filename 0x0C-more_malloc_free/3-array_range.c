#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers in a given range
 * @min: lower limit of the range (included)
 * @max: upper limit of the range (included)
 *
 * Return: pointer to the newly created array on success
 * returns NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int i, size, *nums;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	nums = malloc(size * sizeof(int));
	if (nums == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		nums[i] = i + min;

	return (nums);
}
