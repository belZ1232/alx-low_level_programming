#include "main.h"

/**
* _strlen_recursion - A  function that returns
* the length of a string.
*
* @s: A string to be measured.
* Return: A length of the string.
*/
int _strlen_recursion(char *s)
{
int longit = 0;
if (*s)
{
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}
