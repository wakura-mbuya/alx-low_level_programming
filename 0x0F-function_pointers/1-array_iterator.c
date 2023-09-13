#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each array element
 * @array: array being iterated
 * @size: size of the array
 * @action: function executed on each array element
 *
 * Description: Executes a function given as a parameter
 * on each element of an array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
