#include "sandpiles.h"

/**
 * topple_grid - Takes care of the toppling that would occur
 * @grid: The grid in where the toppling is occuring
 * @i: One of the points needed to locate toppling position
 * @j: Second point needed to locate toppling location
 */
void topple_grid(int grid[3][3], int i, int j)
{
	grid[i][j] = grid[i][j] - 4;
	if (i > 0)
		grid[i - 1][j] = grid[i - 1][j] + 1;
	if (i < 2)
		grid[i + 1][j] = grid[i + 1][j] + 1;
	if (j > 0)
		grid[i][j - 1] = grid[i][j - 1] + 1;
	if (j < 2)
		grid[i][j + 1] = grid[i][j + 1] + 1;
}

/**
 * sandpiles_sum - Computes sum of two sandpiles
 * @grid1: The first grid to add, where new grid will be saved
 * @grid2: The second grid to add
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j, flag;
	int toppleLocations[3][3];

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			grid1[i][j] = grid1[i][j] + grid2[i][j];

	while (1)
	{
		flag = 0;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (grid1[i][j] > 3)
				{
					toppleLocations[i][j] = 1;
					flag = 1;
				}
			}
		}
		if (flag == 0)
			return;
		printf("=\n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
				printf("%d ", grid1[i][j]);
			putchar('\n');
		}
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				if (toppleLocations[i][j] == 1)
					topple_grid(grid1, i, j);
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				if (toppleLocations[i][j] != 0)
					toppleLocations[i][j] = 0;
	}
}
/*
* THOUGHT PROCESS NOTES:
* Create a list (?) to keep track of points that need to topple, set to NULL
* Add the two grids onto grid1

* This is all in one loop going on forever (as else will tell when to stop)
* Loop through grid1 and save into list each point that needs to topple
* If list length > 0 then
*	print grid
*	loop through list and topple each point saved
*	once done with loop then set list to 0
* else (list length == 0 and is empty)
*	return (to end this function as loops forever)
*/
