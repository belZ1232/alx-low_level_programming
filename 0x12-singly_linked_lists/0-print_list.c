#include <stdio.h>
#include "lists.h"

/**
* print_list - elements of list_t.
* @h: head of link list
* Return: number of nodes printed
*/
size_t print_list(const list_t *h)
{
const list_t *ptr = h;
size_t n = 0;

while (ptr != NULL)
{
if (ptr->str != NULL)
{
printf("[%u] %s\n", ptr->len, ptr->str);
}
else
{
printf("[0] (nil)\n");
}
n++;
ptr = ptr->next;
}
return (n);
}
