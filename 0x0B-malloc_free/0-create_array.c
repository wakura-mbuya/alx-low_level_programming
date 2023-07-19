#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters dynamically
 * @size: the size of the character array
 * @c: the character initialized in the array elements
 *
 * Description: Creates an array of characters dynamically and initializes
 * the elements of the array to character c. If size is passed as 0, the
 * function returns NULL
 * Return: pointer to the character array if the initialization was successful,
 * if the initialization fails or the size of the array is set to 0, the
 * function returns NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	/* check if the memory declaration was successful */
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
