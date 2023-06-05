#include "main.h"

/**
 * _strpbrk  Search a string for any occurence of any set of bytes
 * @s: The string being searched
 * @accept: The second string that contains the bytes being searched in s
 * Description: Locates the first occurrence in the string s of any of the
 * bytes in the string accept
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such bytes is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; ++i)
		for (j = 0; *(accept + j) != '\0'; ++j)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	return ('\0');
}
