#include "lists.h"

/**
* insert_nodeint_at_index - func dart insert new node in list
* @head: it is a pointer of first node
* @idx: it is an index that new nodes added
* @n: data that inserted in new  nodes
* Return: pointer or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; temp_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		else
		temp_node = temp_node->next;
	}
	return (NULL);
}
