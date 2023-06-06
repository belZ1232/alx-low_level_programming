#include "lists.h"
/**
* print_listint - func dat print out all elements list
* @h: it is a pointer to the head of list
* Return: nodes of the list
*/

size_t print_listint(const listint_t *h)
{
	size_t countnodes = 0;

	for (countnodes = 0; h != NULL; countnodes++, h = h->next)
	{
		printf("%d\n", h->n);
	}
	return (countnodes);
}
