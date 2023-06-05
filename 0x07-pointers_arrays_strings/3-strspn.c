#include "main.h"

/**
 * _strspn - Gets the lenghth of a prefix substring
 * @s: the prefix substring
 * @accept: the the initial string
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag;

	for (i = 0; *(s + i) != '\0'; j++)
	{
		flag = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 0;
				break;
			}
		}

	if (flag)
		break;
	}

	return (i);
}
