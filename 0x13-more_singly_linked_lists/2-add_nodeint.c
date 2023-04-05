#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function for adding nodes at the start of a listint_t list.
 * @head: a double head pointer
 * @n: int to add in the new node
 *
 * Return: NULL for error
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
