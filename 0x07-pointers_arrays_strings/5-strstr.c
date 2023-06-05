#include  "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: The original string being searched
 * @needle: the substring being searched
 *
 * Description: Finds the first occurence of the substring needle
 * in the string haystack. The terminating null bytes (\0)
 * are not compared
 * Return: A pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *stk;
	char *ndl;

	while (*haystack != '\0')
	{
		stk = haystack;
		ndl = needle;

		while (*haystack != '\0' && *ndl != '\0' && *haystack == *ndl)
		{
			haystack++;
			ndl++;
		}

		if (!*ndl)
		{
			return (stk);
		}
		haystack = stk + 1;
	}

	return (0);
}
