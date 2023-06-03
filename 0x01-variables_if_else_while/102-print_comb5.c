#include <stdio.h>

/**
 * main - prints all possible combination of two two-digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, k, l;

	for (i  = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			for (k = i; k < 10; ++k)
			{
				for (l = j + 1; l < 10; ++l)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(32);
					putchar(k + '0');
					putchar(l + '0');

					if ((i == 9) && (j == 8) && (k == l))
					{
						continue;
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);

}
