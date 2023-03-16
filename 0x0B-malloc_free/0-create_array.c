#include "main.h"
#include <stdlib.h>

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
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i - 0; i < size; i++)
		array[i] = c;

	return (array);
}
