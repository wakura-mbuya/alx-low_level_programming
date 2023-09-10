#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	char *start, *end;	/* pointers to th start and end of the string */
	char temp;

	start = s;
	end = s;
	/* move the end pointer to the end of the string */
	while (*end != '\0')
		end++;
	end--;	/* skip the null terminator */

	/* swap the characters pointed to by start with end */
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
