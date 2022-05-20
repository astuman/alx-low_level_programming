#include "lists.h"
/**
 *print_list - prints all the elements  a list_t list.
 *@h: singly linked list.
 *Return: number of elements in the list.
 **/
size_t print_list(const list_t *h)
{
size_t aa;
aa = 0;
while (h != NULL)
{
if (h->str == NULL)
_putchar("[0], (nill)")
else
_putchar(h->len, h->str);
h = h->next;
aa++;
}
return (aa);
}
