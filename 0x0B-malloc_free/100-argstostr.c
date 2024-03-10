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
	int i, k, i_length, args_length;	/* for loops iteration */
	char *args_str;	/* a string containing all the args */

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Get the length of all the args */
	args_length = 0;
	for (i = 0; i < ac; i++)
	{
		i_length = 0;
		while (av[i][i_length] != '\0')
			i_length++;
		args_length += i_length;
	}
	/* add the length for the new line character to be added */
	args_length += ac;
	/* allocate memory for the args string */
	args_str = (char *)malloc(args_length * sizeof(char));
	if (args_str == NULL)
		return (NULL);	/* malloc has failed */
	/* copy the args to the new string one by one */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		i_length = 0;
		while (av[i][i_length] != '\0')
		{
			args_str[k] = av[i][i_length];
			k++;
			i_length++;
		}

		if (k < args_length - 1)
		{
			k++;
			args_str(k) = '\n';
		}
		k++;
	}
	return (args_str);
}
