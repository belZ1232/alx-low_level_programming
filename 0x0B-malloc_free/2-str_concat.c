#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: an input one to concat
 * @s2: an input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int t, pn;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

t = pn = 0;
while (s1[t] != '\0')
t++;
while (s2[pn] != '\0')
pn++;
conct = malloc(sizeof(char) * (t + pn + 1));

if (conct == NULL)
return (NULL);
t = pn = 0;
while (s1[t] != '\0')
{
conct[t] = s1[t];
t++;
}

while (s2[pn] != '\0')
{
conct[t] = s2[pn];
t++, pn++;
}
conct[t] = '\0';
return (conct);
}
