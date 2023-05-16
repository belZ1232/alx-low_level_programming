#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*free_grid - the fuction dat frees 2d array
*@grid: the 2 dimesional grid
*@height: the height dimension of grid
*Description: frees memory of grid
*Return: Nothing
*/
void free_grid(int **grid, int height)
{
int q;

for (q = 0; q < height; q++)
{
free(grid[q]);
}
free(grid);
}
