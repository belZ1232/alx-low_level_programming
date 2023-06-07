#include "lists.h"
/**
* pop_listint - it is a func dat delete head node of list
* @head: it is a pointer to head list
* Return: deleted data inside a node or 0 if empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int b;

	if (!head || !*head)
		return (0);
	b = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
	return (b);
}
