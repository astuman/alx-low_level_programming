#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints all the elements
 * @h: pointer to the list_t list to point
 * Return: the number of nodes printed
 **/

size_t list_len(const list_t *h);
{
size_t nnn = 0;
while(h) 
{
nnn++;
h = h->next;
}
return(nnn);
};
