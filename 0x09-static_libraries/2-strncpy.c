#include "main.h"
/**
* _strncpy - A function that copies a string,
*
* @dest: The destination.
* @src: A source.
* @n: The amount of bytes from source.
* Return: The pointer to destination.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}

