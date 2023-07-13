#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the program
 * @argc: the number of commandline arguments passed
 * @argv: the list of command line arguments passed
 *
 * Description: Multiplies the numbers passed as the commandline
 * arguments and prints the result. Prints Error arguments not passed
 * Return: 0 on success, 1 on fail
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		print("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
