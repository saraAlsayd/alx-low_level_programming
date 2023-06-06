#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements of linked list.
 * @h: linked list of listint_t to print.
 *
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
size_t *newnode;
unsigned int n = 0;
newnode = h;

	while (h != 0)
{
printf("%d\n", newnode->n);
n++;
newnode = newnode->next;               
}

	return (n);
}

