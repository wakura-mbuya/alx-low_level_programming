#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - cancatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string or NULL if
 * concatenation fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, j;
	char *str_;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		len1 = i;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			;
		len2 = i + 1;
	}

	str_ = malloc((len1 + len2) * sizeof(char));
	if (str_ == NULL)
		return (NULL);

	for (i = 0; i <= len1; i++)
		str_[i] = s1[i];

	for (j = 0; j <= len2; j++)
		str_[i + j] = s2[j];
	str_[i + j] = '\0';

	return (str_);
}
