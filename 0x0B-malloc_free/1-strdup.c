#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_strdup - duplicates to the new memory space.
*@str: char
*Return: 0(success)
*/
char *_strdup(char *str)
{
char *sss;
int i, z = 0;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;

sss = malloc(sizeof(char) * (i + 1));

if (sss == NULL)
return (NULL);

for (z = 0; str[z]; z++)
sss[z] = str[z];

return (sss);
}

