#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: number of command line arguments passed
 * @argv: list of command line arguments passed
 *
 * Description: Prints the sum of the command line arguments passed
 * if any of the arguments is not a valid integer, program prints
 * "Error", if no arguments are passed, it prints 0
 * Return: 0 on success, 1 if an error is encountered
 */
int main(int argc, char *argv[])
{
	int sum;
	int num, i;
	char *endptr;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		sum = 0;
		for (i = 2; i < argc; i++)
		{
			num = strtol(argv[i], &endptr, 10);

			if (*endptr != '\0')
			{
				/* not an int */
				puts("Error");
				return (1);
			}
			else
			{
				/* valid int */
				sum += num;
			}
		}

		printf("%d\n", sum);
		return (0);
	}
}

