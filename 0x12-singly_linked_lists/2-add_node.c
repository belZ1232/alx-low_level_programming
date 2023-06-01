#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - func dat adds a new node
* at the beginning of a linked list
* @head: double pointer to the list_t list
* @str: add a new string in the node
* Return: an address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->num = strlen(str);
new->next = (*head);
(*head) = new;

return (*head);
}
