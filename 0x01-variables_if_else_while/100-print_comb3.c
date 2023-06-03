#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;
	int j;

	for (i = 0; i < 9; ++i)
	{
		for (j = i + 1 ; j < 10; ++j)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8)
			{
				putchar(44);
				putchar(32);
			}

		}
	}
	putchar(10);

	return (0);
}
