#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	char k; /* for iterating the alphabets */

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == c)
			return (1);
	}
	return (0);
}
