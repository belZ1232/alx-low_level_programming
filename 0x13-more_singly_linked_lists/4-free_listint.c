#include "lists.h"

/**
* free_listint - it is function dat frees a list
* @head: it is a pointer to head list
*/

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}

