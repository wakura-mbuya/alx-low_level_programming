#include <stdio.h>

/**
 * print_diagsums - Prints sum of the 2 diagonals of a square integer matrix
 * @a: Input pointer
 * @size: The size of the square matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int k;
	int total1, total2;

	total1 = total2 = 0;

	for (k = 0; k < (size * size); ++k)
	{
		if (k % (size + 1) == 0)
		{
			total1 += *(a + k);
		}

		if (k % (size - 1) == 0 && k != 0 && k < size * size - 1)
		{
			total2 += *(a + k);
		}
	}
	printf("%d, %d\n", total1, total2);
}
