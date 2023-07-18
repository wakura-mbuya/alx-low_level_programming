#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: Prints the name of the file the program was
 * compiled from
 * Return: 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
