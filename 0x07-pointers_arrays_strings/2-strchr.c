#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string being searched
 * @c: the character being searched in the string
 *
 * Description: Traverses the string s and returns the first
 * occurence of the character c in the string s
 * Return: A pointer to the first occurence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int j;

	for (j = 0; *(s + j) != '\0'; ++j)
	{
		if (*(s + j) == c)
			return (s + j);
	}

	if (*(s + j) == c)
	{
		return (s + j);
	}

	return ('\0');
}
