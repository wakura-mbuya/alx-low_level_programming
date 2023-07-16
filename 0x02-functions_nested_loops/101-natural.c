#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: computes and prints the sum of the multiples
 * of 3 or 5 between 0 and 1024 (excluded)
 * Return: 0 (success)
 */
int main(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);

	return (0);
}
