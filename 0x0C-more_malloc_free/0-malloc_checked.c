#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Allocates memory using malloc
 *@b: number of memory bytes to allocte
 *
 * Return: pointer to the allocated memory or exit normal normal with status 98
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
