#include <stdio.h>

/**
 * main - program entry point
 * @argc: number of command line arguments
 * @argv: list of commandline arguments
 *
 * Description: prints all aruments passed to the program
 * Return: 0 always (success)
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
}
