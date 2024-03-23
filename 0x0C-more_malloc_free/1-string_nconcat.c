#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters of s2 to be concatenated to s1
 *
 * concatenates n bytes of s2 to s1
 * Return: pointer to the new string containing s1 and n bytes of s2 on success
 * otherwise returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;	/* length of s1 and s2 */
	unsigned int i; /* for loop iteration */
	char *s;

	len1 = 0;
	if (s1)
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	len2 = 0;
	if (s2)
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	if (n >= len2)
		n = len2;
	s = malloc(len1 + n + 1);
	if (s == NULL)
		return (NULL);
	if (len1 == 0 && len2 == 0)
		s[0] = '\0';
	else if (len1 == 0 && len2 > 0)
	{
		for (i = 0; i < n; i++)
			s[i] = s2[i];
		s[n] = '\0';
	}
	else if (len1 > 0 && len2 == 0)
	{
		for (i = 0; i < len1; i++)
			s[i] = s1[i];
		s[len1] = '\0';
	}
	else
	{
		for (i = 0; i < len1; i++)
			s[i] = s1[i];
		for (i = 0; i < n; i++)
			s[i + len1] = s2[i];
		s[len1 + n] = '\0';
	}
	return (s);
}
