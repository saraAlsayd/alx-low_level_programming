#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data.
 * @head: pointer.
 * Return: sum of all data.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

