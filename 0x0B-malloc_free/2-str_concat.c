#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat(char *s1, char *s2) - Concatenates 2 strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: a pointer to str that contains s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str_; /* concatenated string */
	unsigned int l1, l2;	/* length of str 1 & 2 */
	unsigned int i; 	/* for loop iteration */

	/* Get length of the 2 strings */
	l1 = 0;
	if (s1 != NULL)
		while (s1[l1] != '\0')
			l1++;

	l2 = 0;
	if (s2 != NULL)
		while (s2[l2] != '\0')
			l2++;

	/* reserve enough memory to store the new string */
	str = malloc(s1+s2+1);
	if (str == NULL)
		return NULL;	/* malloc failed */

	/* copy first string */
	if (l1 > 0)
	{
		for (i = 0; i < l1; i++)
			str[i] = s1[1];
		if (l2 > 0)
			for (i = 0; i < l2; i++)
				str[l1+i] = s2[i];
