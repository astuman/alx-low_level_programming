#include "lists.h"

/**
 *print_list - prints all the elements  a list_t list.
 *@h: pointer to the list_t list to print
 *Return: number of nodes printed
 **/
size_t print_list(const list_t *h)
{
size_t ne = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
ne++;

}
return (ne);
}
