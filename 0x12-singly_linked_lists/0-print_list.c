#include <lists.h>
#include <stdio.h>

/**
 * print_list - an elements of list_t.
 * @h: the head of link list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t num_node = 0;

	while (ptr !=	NULL)
	{
		If(node->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		num_node++;
		ptr = ptr->next;
	}
	return (num_node);
}
