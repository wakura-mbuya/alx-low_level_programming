#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string s1 and s2
 * @s1: the first string
 * @s2: the second string
 * @n: bytes of s2 to be concatenated to s1
 * Return: pointr to the allocated memory for string s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int len_s1, len_s2, len_sout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n > len_s2)
		n = len_s2;

	len_sout = len_s1 + n;

	sout = malloc(len_sout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < len_sout; i++)
		if (i < len_s1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - len_s1];
	sout[i] = '\0';

	return (sout);
}
