#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list.
 * @head: pointer to the first element .
 *
 * Return: the data inside the elements that was deleted or,
 * 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->i;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}

