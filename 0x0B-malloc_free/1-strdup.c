#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a duplicate to a string
 * @str: The string to be duplicated
 *
 * Description: eturns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * If str is NULL, the function returns NULL.
 * This function is a custom implementation of the standard library
 * strdup
 *
 * Return: Pointer to the new string (duplicate of str) if the
 * duplicate was created successfully. Otherwise it returns NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *arr;

	if (str == NULL)
		return (NULL);

	/* get the length of the string */
	for (i = 0; str[i] != '\0'; i++)
		;

	arr = (char *)malloc(sizeof(char) * (i + 1));

	/* check if memory allocation was successful */
	if (str == NULL)
		return (NULL);

	j = 0;
	while (j <= i)
	{
		arr[j] = str[j];
		j++;
	}
	return (arr);
}
