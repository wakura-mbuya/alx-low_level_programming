#include <stdio.h>

/**
 * main - the program entry point
 * @argc: the number of command line argurments passed
 * @argv: List of command line arguments passed
 * Description: Prints the number of command line arguments passed
 * when the program is executed. Technically, the name of the program
 * is also an argument but in this program, it is not counted as an
 * argument
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
