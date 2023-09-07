#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry to program
 * @argc: arguments count
 * @argv: list of commandline args
 *
 * Description: adds positive numbers
 * Return: 0 on success, 1 on fail/error
 */
int main(int argc, char **argv)
{
	int sum, num, i;
	char *endptr;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = (int)strtol(argv[i], &endptr, 10);
			if (*endptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
