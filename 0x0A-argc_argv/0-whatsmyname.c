#include <stdio.h>

/**
 * main - entry point to the program
 * @argc: number of command line arguments passed
 * @argv: contains a list of command line arguments passed
 * when the program is executed
 * Description: Prints the name of the program on the commandline
 * Even if the program is renamed, it will print the new name
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	puts(argv[0]);

	return (0);
}
