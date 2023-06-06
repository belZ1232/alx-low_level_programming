#include "lists.h"

/**
* add_nodeint - func dat add a new node at the beginning of list
* @head: it is a pointer to a pointer of head list
* @n: it is the valued to be added
* Return: element address or Null if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
