#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: Source string
 * Return: Pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;	/* for traversing through the source string */

	/* move to the end of dest */
	while (*ptr != '\0')
		ptr++;

	/* copy characters from src to dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* add the null terminator to ptr */
	*ptr = '\0';

	return (dest);
}
