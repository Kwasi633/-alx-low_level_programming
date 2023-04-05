#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds new node at listint_t list end.
 * @head: double pointer to head
 * @n: int to add
 *
 * Return: address to new node else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	last_node = *head;
	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;
	return (new_node);
}
