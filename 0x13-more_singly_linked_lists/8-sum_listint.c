#include "lists.h"

/**
 * sum_listint - sum of all the data in a listint_t list.
 * @head: first node in a linked list.
 *
 * Return: result of sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->i;
		temp = temp->next;
	}

	return (sum);
}

