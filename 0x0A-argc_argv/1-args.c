#include <stdio.h>

/**
 * main - Entry point to the program
 * @argc: number of commandline arguments
 * @argv: List of command line arguments
 *
 * Description: Prints the number of command line arguments passed to it
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
