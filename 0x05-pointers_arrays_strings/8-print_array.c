#include <stdio.h>

/**
 * print_array - prints the first n elements of an integer array
 * @a: the integer array
 * @n: number of elements of a to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;	/* for iterating though the array elements*/

	for (i = 0; i < n; i++)
	{
			if (i > n - 2)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}
