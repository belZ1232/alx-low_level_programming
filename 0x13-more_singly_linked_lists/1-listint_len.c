#include "lists.h"

/**
* listint_len - func dat return number of element in linked list
* @h: pointer to head of list
* Return: digit of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t countnodes = 0;

	for (countnodes = 0; h != NULL; countnodes++)
	{
		h = h->next;
	}
	return(countnodes)
}
