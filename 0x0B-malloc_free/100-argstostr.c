#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the argument count
 * @av: an array of all your arguments
 *
 * Return: pointer to a string containing all the arguments of your program
 */
char *argstostr(int ac, char **av)
{
	size_t i, j, cnt; /* for loops iteration */
	size_t i_length; /* length of one arg */
	size_t args_length; /* length of all the args */
	char *args_str;	/* a string containing all the args */

	cnt = ac;

	/* check if there are arguments passed */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Get the length of all the args */
	args_length = 0;
	for (i = 0; i < cnt; i++)
	{
		/* get the length of a single arg */
		i_length = 0;
		while (*av[i] != '\0')
		{
			i_length++;
			av[i]++;
		}

		/* add the length of this arg to the total length */
		args_length += i_length;
	}

	/* add the length for the new line character to be added */
	args_length += ac;

	/* allocate memory for the args string */
	args_str = (char *)malloc(args_length * sizeof(char));
	if (args_str == NULL)
		return (NULL);	/* malloc has failed */

	/* copy the args to the new string one by one */
	i = 0;
	while (i < args_length)
	{
		for (j = 0; j < cnt; j++)
		{
			while (*av[j] != '\0')
			{
				args_str[i] = *av[j];
				av[j]++;
				i++;
			}
			args_str[i] = '\n';
		}
	}
	return (args_str);
}
