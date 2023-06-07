#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp,*node;

	if (!head)
		return;

        node = *head;

	while (node)
	{
        node = temp;
		node = node->next;
		free(temp);
		
	}
    *head = NULL;
}

