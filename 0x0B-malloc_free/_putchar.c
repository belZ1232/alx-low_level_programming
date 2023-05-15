#include "main.h"
#include <unistd.h>

/**
* _putchar - write a char c to stdout.
*
* @c: A char to print.
*
* @Return: On successful 1.
* On error, return -1 
* and is set appropriately.
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}

