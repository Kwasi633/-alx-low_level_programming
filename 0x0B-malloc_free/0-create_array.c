#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an arr of chars
 * and initializes it with a specific char
 * @size: The size of the arr
 * @c: Initial value
 *
 * Return: A pointer to the arr else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);
}
