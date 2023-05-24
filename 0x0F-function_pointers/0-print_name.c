#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Write a function that prints a name.
* @name: added to a string
* @f: function to a pointer
* Return: none
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
