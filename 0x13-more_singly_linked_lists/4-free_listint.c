#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to the start of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; head != NULL; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
