#include "main.h"

/**
* _memset - Block of memoryshould be filled  with a specific value
*
* @s: An address of memory to be filled
* @b: A desired value
* @n: Number of bytes to be changed
* Return: changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

