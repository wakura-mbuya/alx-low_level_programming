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

	for (n = 0; n < 10; n++)
		putchar(n);
	for (k = 'a', k <= 'z'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
