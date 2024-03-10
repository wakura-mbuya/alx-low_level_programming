#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free memory allocated to a 2D array
 * @grid: the 2D array
 * @height: Number of rows in the grid
 */
void free_grid(int **grid, int height)
{
	int i;	/*for loop iteration*/

	/* Free the memory for the rows in the grid */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the memory allocated to the grid itself */
	free(grid);
}
