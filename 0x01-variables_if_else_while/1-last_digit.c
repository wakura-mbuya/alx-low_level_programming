#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to a variable
 * each time its run and prints output based on conditions
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, k; /* k is last digit of n */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	}
	else
	{
		if (k == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, k);
		}
		else
		{
			if (k < 6)
			{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
			}
		}
	}
	return (0);
}
