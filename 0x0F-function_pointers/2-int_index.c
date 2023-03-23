#include "function_pointers.h"

/**
 * int_index - searches for an int in an arr
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to func used to compare values
 *
 * Return: First index for which cmp doesnt return 0
 * or (-1) if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size > 0 && cmp && size && array)
		for (a = 0; a <= size; a++)
			if (cmp(array[a]))
				return (a);
	return (-1);

}
