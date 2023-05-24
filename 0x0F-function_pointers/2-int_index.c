#include "function_pointers.h"
/**
* int_index - Write a function that searches for an integer.
* give back an ind place if comp = true, else -1
* @array: an array
* @size: elements size in an array
* @cmp: function of one of the three in main
* Return: 0(Successfully).
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int q;
while (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (q = 0; q < size; q++)
{
while (cmp(array[q]))
return (q);
}
return (-1);
}
