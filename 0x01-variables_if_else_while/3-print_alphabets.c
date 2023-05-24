#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase, then
 * in uppercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c; /* for iterating through the alphabet */

	for (c = 'a'; c <= 'z'; c++)
		putchar(c); /* prints lowercase */
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c); /* print uppercase */
	putchar('\n'); /* print newline*/

	return (0);
}
