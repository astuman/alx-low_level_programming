#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - prints all the elements in a linked list
 * @h: pointer to the list_t list to point
 * Return:number of elements in h
 **/

size_t list_len(const list_t *h)
{
size_t nnn = 0;
while(h) 
{
nnn++;
h = h->next;

}
return (nnn);
};
