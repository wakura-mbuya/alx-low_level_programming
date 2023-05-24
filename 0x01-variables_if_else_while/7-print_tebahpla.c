#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar(10);

	return (0);
}
