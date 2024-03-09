#include <stdio.h>
/**
 * main - program entry point
 * @argc: Number of command line arguments
 * @argv: array of strings with cmd arguments passed
 *
 * This function prints the name of the program
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void)argc;	/* arg c is unused, void it */

	printf("%s\n", argv[0]);

	return (0);
}
