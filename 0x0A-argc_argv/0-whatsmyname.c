#include <stdio.h>

/**
 * main - entry point to the program
 * @argc: Number of command line arguments to main
 * @argv: Command line arguments passed on program call
 *
 * Description: This program prints its name followed by a new line
 * Return: Nothing - always (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
