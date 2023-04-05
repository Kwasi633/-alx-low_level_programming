#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the num of elements in a linked listint_t list
 *
 * @h: head pointer
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	for (; h != NULL; h = h->next)
	{
		a++;
	}

	return (a);
}
