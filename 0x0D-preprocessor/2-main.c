#include <stdio.h>

/**
 * main - entry point
 * prints the name of the file the program was compiled from
 * Return: 0 always
 */
int main(void)
{
	printf(__FILE__);
	printf("\n");
	return (0);
}
