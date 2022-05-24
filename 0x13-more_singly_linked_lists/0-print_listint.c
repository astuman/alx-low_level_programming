#include "lists.h"
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
 size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n;
    current = h;
    n = 0;

    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}
