#ifndef _SANDPILES_H_
#define _SANDPILES_H_

#include <stdlib.h>
#include <stdio.h>

/* 0-sandpiles.c */
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
void topple_grid(int grid[3][3], int toppleLocations[3][3]);
void my_print_grid(int grid[3][3]);

#endif /* _SANDPILES_H_ */
