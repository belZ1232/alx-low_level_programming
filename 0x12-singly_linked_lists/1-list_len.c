#include <stdlib.h>
#include "lists.h"

/**
* list_len - func dat returns the
* num of elements in a linked list
* @h: a pointer to list_t list
* Return: the num of elements in h
*/
size_t list_len(const list_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
