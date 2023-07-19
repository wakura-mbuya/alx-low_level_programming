#include "function_pointers.h"

/**
 * array_iterator - executes a funtion on each array element
 * @array: the array being executed
 * @size: number of elements in the array
 * @action: Function that is executed on each of the array elements
 *
 * Description: Executes a function passed (action) on each of the
 * elements of the array (array)
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
