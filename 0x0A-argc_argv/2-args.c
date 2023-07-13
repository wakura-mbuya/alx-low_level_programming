#include <stdio.h>

/**
 * main - the entry point to the program
 * @argc: the number of command line arguments passed
 * @argv: the list of command line arguments passed
 *
 * Description: prints the list of command line arguments passed
 * when the program is called. It prints all the arguments including
 * the first one
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
