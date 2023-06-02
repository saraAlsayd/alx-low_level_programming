#include <stdlib.h>
#include "lists.h"

/**
 *list_len - returns the number of elements.
 *@h: pointer the list_t list.
 *Return: number to elements.
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
return (j);
}

