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
	unsigned int i, k, limit, j;
	char *str_;

	if (s1 == NULL)
		s1 = "";
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		s2 = "";
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			;
	}

	str_ = malloc((i +j +1) * sizeof(char));
	if (str_ == NULL)
		free(str_)
		return (NULL);

	for (k = 0; k < i; k++)
		str_[k] = s1[i];
	
	limit = j;
	for (j = 0; j <= limit; k++, j++)
		str_[k] = s2[j];

	return (str_);
}
