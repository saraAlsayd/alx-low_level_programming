#include "lists.h"

/**
 * find_listint_loop - finds the loop linked list.
 * @head: linked list to search.
 *
 * Return: address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowy = head;
	listint_t *fasty = head;

	if (!head)
		return (NULL);

	while (slowy && fasty && fasty->next)
	{
		fasty = fasty->next->next;
		slowy = slowy->next;
		if (fasty == slowy)
		{
			slowy = head;
			while (slowy != fasty)
			{
				slowy = slowy->next;
				fasty = fasty->next;
			}
			return (fasty);
		}
	}

	return (NULL);
}

