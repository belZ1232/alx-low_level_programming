#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - Write a function that executes a function
* prints an array element on a new line
* @array: an array
* @size: num of elem to print
* @action: print in reg or hex
* Return: null
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k;
while (array == NULL || action == NULL)
return;
for (k = 0; k < size; k++)
{
action(array[k]);
}
}
