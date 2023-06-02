#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints the elements of linked list.
 *@h: pointer to the list_t list to print.
 *Return: the number of node print.
 */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	for (h != NULL)
	{
		if (!h->str == NULL)
			printf("[0] (nil)\n %d %s");
		else
			printf("[%u] %s\n", h->str, h->len);
		h = h->next;
		b++;
	}
return (b);
}

