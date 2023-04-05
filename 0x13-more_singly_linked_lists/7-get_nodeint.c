#include "lists.h"

/**
 * get_nodeint_at_index - function t0 return the nth node..
 * @head: pointer to the first node
 * @index: index of nth node
 *
 * Return: pointer to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head != NULL && a < index)
	{
		head = headd->next;
		a++;
	}

	return (head == NULL ? NULL : head);
}
