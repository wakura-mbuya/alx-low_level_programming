#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array that contains the integer to be searched
 * @size: number of elements in the array
 * @cmp: function used to compare the integers when searching
 * Return: 0 if integer does not match otherwise returns something else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 0)
				;
			else
				return (i);
		}
	}
	return (-1);
}
