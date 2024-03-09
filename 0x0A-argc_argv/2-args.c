#include <stdio.h>
/**
 * main - program entry
 * @argc: number of cmd ln args
 * @argv: array of cmd ln args
 *
 * Prints all cmd ln args, one per line
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
