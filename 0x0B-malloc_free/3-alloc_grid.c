#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - initializes a 2D array of integers
 * @width: the number of columns in the array
 * @height: the number of rows in the array
 *
 * creates and initializes a 2D array of int with 0
 * Return: Pointer to the 2D array of int if initializeation
 * is successful, returns NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;	/*2D array of int*/
	int i, j;	/*loop iterators*/

	if (width <= 0 || height <= 0)
		return (NULL);

	/*allocate memory for the grid rows (2D array of pointer)*/
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);	/*malloc failed*/

	/*allocate memory or each row*/
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);	/*malloc failed*/
	}

	/*initialize the 2D array elements to 0*/
	for (i = 0; i < height; i++)
		for (j = 0; j < widht; j++)
			grid[i][j] = 0;

	return (grid);
}
