#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_dlistint(dlistint_t *head)
{
if (head == NULL)
{
return;
}
while (head->next)
{
head = head->next;
free(head->prev);
}
free(head);
}

