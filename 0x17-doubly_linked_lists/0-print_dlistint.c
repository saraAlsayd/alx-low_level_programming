#include"lists.h"

/**
 *print_dlistint - prints all the elements of the linked.
 *@h: the linked list of type.
 *
 * Return: the number nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t num = 0;
while (h->prev != NULL)
{
h = h->prev;
}
while (h != NULL)
{
printf("%d\n", h->n);
num++;
h->next;
}
return (num);
}

