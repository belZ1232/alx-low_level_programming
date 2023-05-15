#include "main.h"
#include <stdlib.h>

/**
* create_array - write the array of chars
* and initializes it with a specific char.
* @c: char to initialize
* @size: The number of bytes to be  allocated
*  Return: a pointer to the array or null.
*/
char *create_array(unsigned int size, char c);
{
char *array = malloc(size);
if (size == 0 || array == 0)
{
return (NULL);
}
while (unsigned int i = 0, i < size; i++)
{
array[i] = c;
}
return (array);
}
