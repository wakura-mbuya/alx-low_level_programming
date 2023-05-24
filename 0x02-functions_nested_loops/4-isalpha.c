#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if c is either lowercase or uppercase character,
 * 0 otherwise
 */
int _isalpha(int c)
{
	char k; /* for iterating through the alphabets */

	for (k = 'a'; k <= 'z'; k++)
	{
		if (c == k)
			return (1);
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		if (c == k)
			return (1);
	}
	return (0);
}
