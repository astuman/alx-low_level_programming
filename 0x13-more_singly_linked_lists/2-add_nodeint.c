#include "lists.h"

/**
*add_nodeint - adds a new node at the begening of a linked list
*@head: pointer points at the first node
*@n: data to insert at the new node
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));

if(!new)
{
return (NULL);
}
new->n = n;

new->next = *head;

*head = new;

return (new);
}
