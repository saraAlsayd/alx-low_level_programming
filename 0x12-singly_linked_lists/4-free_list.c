#include <stdlib.h>
#include "lists.h"

/**
 *free_list - frees to linked list.
 *@head: list_t list to be free.
 */
void free_list(list_t *head)
{
	list_t *tep;

	while (head)
	{
		tep = head->next;
		free(head->str);
		free(head);
		head = tep;
	}
}

