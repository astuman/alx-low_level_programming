#include "lists.h"

/**
 *free_listint - frees a linked list
 *@head: lists to be freed
 **/
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
temp = head->next;
free(head);
head = temp
}
}
