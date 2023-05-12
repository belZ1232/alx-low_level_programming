#include "main.h"
/**
*_memcpy - Function that copies memory area
*
*@dest: Where does the memory stored
*@src: Where does the memory copied
*@n: Num of the bytes
*Return: A copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)

{
dest[r] = src[r];
n--;
}
return (dest);
}

