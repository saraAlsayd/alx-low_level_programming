#include "lists.h"

/**
 * print_listint - prints all the elements of linked list.
 * @h: linked list of type listint_t.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodenew = 0;

	while (h)
	{
		printf("%d\n", h->i);
		nodenew++;
		h = h->next;
	}

	return (nodenew);
}

