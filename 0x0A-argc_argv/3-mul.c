#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry
 * @argc: number of cmd ln args
 * @argv: an array of the cmd ln args as strings
 *
 * Multiplies the 2 numbers passed as the cmd args and print the result
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
