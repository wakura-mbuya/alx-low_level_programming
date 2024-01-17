#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a copy of a string
 * @str: The string to duplicate
 *
 * Return: A pointer to a str copy in memory
 */
char *_strdup(char *str)
{
	unsigned int length;	/* lenght of str */
	char *_str;	/* stores a copy of str */
	unsigned int i;	/* for iterating the while loop */

	/* get the length of str */
	length = 0;
	while (str[length] != '\0')
		length++;
	length++;

	if (str == NULL)
		return (NULL);	/* returns Null if str is NULL */

	/* Allocate memory */
	_str = malloc(length);
	if (_str == NULL)
		return (NULL);	/* checks if malloc failed */

	for (i = 0; i < length; i++)
		_str[i] = str[i];
	return (_str);
}
