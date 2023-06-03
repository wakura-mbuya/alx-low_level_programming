#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; ++i)
	{
		for (j = i + 1 ; j < 9; ++j)
		{
			for (k = j + 1; k < 10; ++k)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
