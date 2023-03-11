#include "main.h"

/**
 * *_memset - Fills the first N types of the memry
 * 	of string S(pointer) with the constant byte of 8
 * @s: A pinter to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: String @s, pointer to memory string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
