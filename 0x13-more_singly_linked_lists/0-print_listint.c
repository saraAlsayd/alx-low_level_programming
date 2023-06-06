#include "lists.h"

/**
 * print_listint - prints the elements of linked list.
 * @h: linked list of listint_t to print.
 *
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
	size_t new = 0;

	while (h != 0)
	{
		printf("%d\n", h->new);
		new++;
		h = h->next;
	}

	return (num);
}

