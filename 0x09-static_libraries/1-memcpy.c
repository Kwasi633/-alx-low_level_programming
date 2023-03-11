#include "main.h"

/**
 * _memcpy - Copies N bytes from the memory area pointed
 * to @str into str @dest.
 * @dest: pointer to the string memory to copy to.
 * @src: pointer of string to copy characters from.
 * @n: number of bytes to copy from @src.
 *
 * Return: returns @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
