#include "lists.h"
#include "stdio.h"
/**
 * ToIntFunction: holds number of nodes
 * Return: the number of nodes printed
 **/
size_t list_len(const list_t *h);
{
size_t size = 0;
while(h) 
{
if(!h->str)
_putchar("[0], (nil)");
else
_putchar(h->len);
_putchar(h->str);
h = h->next;
size++;
}
return(size);
};
