#include "lists.h"
#include "stdio.h"
/**
 *print_list - prints all the elements
 * @h: pointer to the list_t list to point
 * Return: the number of nodes printed
 **/

size_t list_len(const list_t *h);
{
size_t size = 0;
while(h) 
{
if(!h->str)
_putchar("[0]");
_putchar("(nill)");
else
_putchar(h->len);
_putchar(h->str);
h = h->next;
size++;
}
return(size);
};
