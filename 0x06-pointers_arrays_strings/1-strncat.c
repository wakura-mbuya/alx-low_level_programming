#include "main.h"

/**
 * _strncat - concatenates n bytes of source string to destination string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes of sourse string to be concatenated to dest
 * Return: Pointer to the new string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;	/* for traversing through the dest string */

	if (n > 0)
	{
		/* move to the end of dest */
		while (*ptr != '\0')
			ptr++;

		/* copy n bytes of src to dest */
		/* 1 char contains 1 byte */
		for (; n > 0; n--)
		{
			*ptr = *src;
			if (*src == '\0')
				break;
			ptr++;
			src++;
		}
	}

	return (dest);
}
