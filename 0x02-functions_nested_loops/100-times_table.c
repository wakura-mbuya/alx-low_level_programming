#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: the maximum value the times table can compute
 *
 * Description: Prints the n times table, starting with 0
 * If n is greater than 15 or less than 0, the function
 * does not print anything
 */
void print_times_table(int n)
{
	int i, j;	/* for iterating in the loops */
	int count;	/* for counting items printed per line */
	int k;		/* for the product */

	if (n < 0 || n > 15)
		return;

	count = 0;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (count > 0 && count <= n)
					printf("   %d", k);
				else
					printf("%d", k);
			}
			else if (k < 100)
			{
				if (count > 0 && count <= n)
					printf("  %d", k);
				else
					printf("%d", k);
			}
			else
				printf("%4d", k);
			count++;

			if (count <= n)
				printf(",");
			else
			{
				printf("\n");
				count = 0;
			}
		}
	}
}
