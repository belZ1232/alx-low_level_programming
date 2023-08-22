#include <lists.h>

/**
 * reverse_listint - linked reverse
 * @head: Pointer to first node on list
 * Return: Pointer to first node on new list
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->n;
		(*head)->n = p;
		 p = *head;
		 *head = n;
	}

	*head = p;

	return (*head);
}
