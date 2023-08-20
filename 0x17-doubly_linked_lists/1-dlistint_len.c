#include "lists.h"

/**
 * dlistint_len - returns the number of elements.
 * @h: linked list of type listint_t to traverse.
 *
 * Return: number node
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t num = 0;
if (h == NULL)
{
return (num);
}
while (h->prev != NULL)
{
h = h->prev;
}
while (h != NULL)
{
num++;
h = h->next;
}

return (num);
}

