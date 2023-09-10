#include "main.h"

/**
 * _strcpy - copies the string src to dest
 * @src: string to be copied
 * @dest: the destination string
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		count++;
		src++;
	}
	*dest = '\0';
	return (dest - count);
}
