#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: head pointer
 *
 * Return: The number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;
	const listint_t *y;

	for (y = h; y != NULL; y = y->next)
	{
		printf("%d\n", y->n);
		x++;
	}

	return (x);
}
