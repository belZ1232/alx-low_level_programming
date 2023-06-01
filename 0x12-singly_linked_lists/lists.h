#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
/**
* struct list_s - singly linked list
* @list_t: it is an alias
*/
typedef struct list_s
{
struct list_s *node1;
list_t *node2
}
int _putchar(char c)
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
/*********** LISTS_H***********/
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif 
