#include <stdio.h>
/**
 * main - program entry
 * @argc: number of cmd arguments
 * @argv: cmd arguments
 *
 * Print the number of cmd arguments passed to it. Program name not counted
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;	/*argv not used, void it*/

	printf("%d\n", argc - 1);
	return (0);
}
