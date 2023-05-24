#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int n;
	char k;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (k = 'a'; k <= 'f'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
