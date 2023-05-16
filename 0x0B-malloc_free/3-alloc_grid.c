#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - the nested loop to make grid
*@width: an input width
*@height: an input height
*Return: the pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **pie;
int j, k;

if (width <= 0 || height <= 0)
return (NULL);

pie = malloc(sizeof(int *) * height);

if (pie == NULL)
return (NULL);

for (j = 0; j < height; j++)
{
pie[j] = malloc(sizeof(int) * width);

if (pie[j] == NULL)
{
for (; j >= 0; j--)
free(pie[j]);

free(pie);
return (NULL);
		}
}

for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
pie[j][k] = 0;
}

return (pie);
}
