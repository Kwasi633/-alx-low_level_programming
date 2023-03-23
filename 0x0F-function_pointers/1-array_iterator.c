#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element
 * @array: array to execute
 * @size: size of arr
 * @action: pointer to the func to execute
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
