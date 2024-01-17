#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of char
 * @size: The size of the array
 * @c: the initialized value
 *
 * Creates an array of char and initialize it with
 * default value
 *
 * Return: A pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	char *ar;	/*Pointer to the array created */
	int i;		/* for iterating through the array elements */

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);	/* malloc failed */

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
