#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: the first number to be printed
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (n = 0; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (a = n; a > 98; a--)
			printf("%d, ", a);
		printf("%d\n", 98);
	}
}
