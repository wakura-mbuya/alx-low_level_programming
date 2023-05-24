#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the digits 0 to 9 using putchar
 * You not allowed to using any variable of type char
 * Return: 0 (success)
 */
int main(void)
{
	int k;

	for (int k = 48; k < 58; k++)
	{
		putchar(k);
	}
	putchar(X'0A');

	return (0);
}
