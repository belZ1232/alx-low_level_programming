#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - the function returns a pointer
*to a new string which is a duplicate of the string.
*
* @str: Duplicated string.
* @Return: A pointer to the copied string (Successfully)
* and NULL if malloc fail.
*/

char *_strdup(char *str)

{
char *duplicate;
unsigned int i, len;
i = 0;
len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
while ((duplicate[i] = str[i]) != '\0')
i++;
return (duplicate);
}
