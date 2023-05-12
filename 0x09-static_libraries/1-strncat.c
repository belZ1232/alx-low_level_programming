#include "main.h"
/**
* _strncat - A function that concatenates two strings,
*
* @dest: The destination.
* @src: A source.
* @n: The amount of bytes used from a src.
* Return: The pointer to the dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}

