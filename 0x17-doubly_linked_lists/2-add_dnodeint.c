#include "lists.h"

/**
 * add_dnodeint - adds a new node at the linked list.
 * @head: pointer to the first node in the list.
 * @n: data to insert in that new node.
 * Return: pointer to the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *h;
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);

temp->n = n;
temp->prev = NULL;
h = *head;

if (h != NULL)
while (h->prev != NULL)
h = h->prev;

temp->next = h;
if (h != NULL)
h->prev = temp;
*head = temp;
return (*head);
}

