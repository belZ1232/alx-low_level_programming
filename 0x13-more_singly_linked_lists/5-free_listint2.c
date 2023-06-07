#include "lists.h"

/**
* free_listint2 - it is a funct dat frees list
* @head: it is a pointer to head list
*/

void free_listint2(listint_t **head)
{
	listint_t *new_node;

	for (new_node = *head; new_node != NULL; new_node = *head)
	{
		*head = (*head)->next;
		free(new_node);
	}
		*head = NULL;
}
