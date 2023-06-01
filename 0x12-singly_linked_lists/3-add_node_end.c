#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - func dat adds a new node
* at the end of a linked list
* @head: a double pointer to the list_t list
* @str: put a string in the new node
* Return: an address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int n = 0;

while (str[n])
n++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
