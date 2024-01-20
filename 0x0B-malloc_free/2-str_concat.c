#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates 2 strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: a pointer to str that contains s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str; /* concatenated string */
	unsigned int l1 = 0, l2 = 0, i;

	if (s1 == NULL && s2 == NULL)
		return (*"");
	if (s1 != NULL)
		while (s1[l1] != '\0')
			l1++;
	if (s2 != NULL)
		while (s2[l2] != '\0')
			l2++;
	str = malloc(l1 + l2 + 1);
	if (str == NULL)
		return (NULL);	/* malloc failed */

	if (s1 == NULL && s2 != NULL)
	{	/* Only s1 is null, copy s2 alone */
		for (i = 0; i < l2; i++)
			str[i] = s2[i];
		str[l2] = '\0';
	}
	else if (s1 != NULL && s2 == NULL)
	{			/* only copy s1 since s2 is null */
		for (i = 0; i < l1; i++)
			str[i] = s1[i];
		str[l1] = '\0';
	}
	else
	{			/* Both s1 and s2 are not null, copy both */
		for (i = 0; i < l1; i++)
			str[i] = s1[i];	/* copy s1 */
		for (i = 0; i < l2; i++)
			str[l1 + i] = s2[i];
		str[l1 + l2] = '\0';
	}
	return (str);
}
