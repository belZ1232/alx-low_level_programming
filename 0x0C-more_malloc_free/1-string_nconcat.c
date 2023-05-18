#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - to concatenates two strings.
* @s1: first string to append to.
* @s2: second string to concatenate from.
* @n: amount of bytes from 2nd to concatenate to 1st
* @Return: the pointer to the allocated memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int main(void);
char *s;
unsigned int i = 0, q = 0, len1 = 0, len2 = 0;
while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n < len2)
s = malloc(sizeof(char) * (len1 + n + 1));
else
s = malloc(sizeof(char) * (len1 + len2 + 1));
if (!s)
return (NULL);
while (i < len1)
{
s[i] = s1[i];
i++;
}
while (n < len2 && i < (len1 + n))
s[i++] = s2[q++];
while (n >= len2 && i < (len1 + len2))
s[i++] = s2[q++];
s[i] = '\0';
return (s);
}
