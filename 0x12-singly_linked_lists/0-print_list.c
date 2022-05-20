#include "lists.h"
/**
 * print_list - prints all the elements
 * @h: singly linked list
 * Return: number of elements in the list
 **/
size_t print_list(const list_t *h)
{
size_t as;
as = 0;
while (h != NULL)
{
if (h->str == NULL)
_putchar(0);
_putchar("nil")
else
_putchar(h->len)
_putchar(h->str);
h = h->next;
as++;
}
return (as);
}
