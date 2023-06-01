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
unsigned int sir = 0;

while (str[sir])
sir++;

new->str = strdup(str);
new->sir = sir;
new->next = (*head);
(*head) = new;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

return (*head);
}
