#include "lists.h"

/**
* get_nodeint_at_index -it is a func dat return a specific index on list
* @head: it is a first node on list
* @index: it is an index dat return
* Return: pointer to specific index or Null
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node = head;
	unsigned int b = 0;

	while (temp_node && b < index)
	{
		temp_node = temp_node->next;
		b++;
	}
	return (temp_node ? temp_node : NULL);
}
