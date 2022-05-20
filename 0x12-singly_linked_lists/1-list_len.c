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
printf("[0], (nil)\n");
else
_putchar("[%u] %s\n", h->len, h->str);
h = h->next;
size++;
}
return(size);
};
