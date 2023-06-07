#include "lists.h"

/**
* sum_listint - it is a func dat return sum of all data of the list
* @head: it is a pointer to first node of list
* Return: sum all data of list or 0 if empty
*/

int sum_listint(listint_t *head)
{
	listint_t *temp_node;
	int sum = 0;

	*temp_node = *head;

	while (temp_node)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}
	return (sum);
}
