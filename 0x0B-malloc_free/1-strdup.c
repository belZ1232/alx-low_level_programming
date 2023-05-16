#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - the function returns a pointer
*to a new string which is a duplicate of the string.
*a copy of string given as a parameter.
* @str: Duplicates string.
* @Return: 0 (Successfully)
* and NULL if malloc fails.
*/

char *_strdup(char *str)

{
char *zzz;
int i, x = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
zzz = malloc(sizeof(char) * (i + 1));
if (zzz == NULL)
return (NULL);
for (x = 0; str[x]; x++)
zzz[x] = str[x];
return (zzz);
}
