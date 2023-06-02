#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - adds a new node at the beginning to linked list.
 *@head: double pointer to list_t list.
 *@str: new string to add in node.
 * Return: the address of new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *num;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
