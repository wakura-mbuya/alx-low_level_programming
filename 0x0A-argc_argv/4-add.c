#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry
 * @argc: number of cmd ln args
 * @argv: array of cmd ln args as str
 *
 * adds positive numbers passed as cmd ln args and prints the result
 * if no number is passed, prints 0
 * if one of the numbers contain a non-digit, print Error
 * all numbers and their sum are int
 *
 * Return: 0 on success, 1 if one of the numbers is a non-digit
 */
int main(int argc, char **argv)
{
	int sum;	/* sum of the numbers */
	int i;		/* for loop iteration */
	long num;	/* one of the cmd args converted to an int */
	char *endptr;	/* for strtol func */

	/* check if at least one number is passed */
	if (argc <= 2)
		printf("%d\n", 0);
	else
	{
		/* at least one int passed, convert each of them one by one */
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &endptr, 10);
			if (*endptr != '\0' && *endptr != '\n')	/*not an int*/
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += (int)num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

