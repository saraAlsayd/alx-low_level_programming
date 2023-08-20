#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer.
 * @n: data to insert element.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *h;
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);

temp->n = n;
temp->next = NULL;

h = *head;

if (h != NULL)
{
while (h->next != NULL)
h = h->next;
h->next = temp;
}
else
{
*head = temp;
}
temp->prev = h;
return (temp);
}

