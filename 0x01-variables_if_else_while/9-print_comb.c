#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints digits 0 to 9
 * Digits are separated by a comma (',')
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
