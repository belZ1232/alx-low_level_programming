#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a linked list to be freed
 * @head: free list_t list
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
