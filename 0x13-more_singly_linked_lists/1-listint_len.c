#include "lists.h"

/**
 * print_listint - prints the elements of linked list.
 * @h: linked list of listint_t to print.
 *
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodenew = 0;

	if (h == NULL)
	{
		return (nodenew);
	}
	while (h != NULL)
	{
		h = h->next;
		nodenew++;
	}
	return (nodenew);
}

