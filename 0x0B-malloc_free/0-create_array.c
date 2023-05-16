#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - write the array of chars
* and initialized specific char.
* @c: char to be initialized
* @size: The number of bytes to be  allocated
* Return: a pointer to the array or null.
*/
char *create_array(unsigned int size, char c)
{
char *array = malloc(size);

if (size == 0 || array == 0)
return (NULL);

while (size--)
array[size] = c;
return (array);

}

