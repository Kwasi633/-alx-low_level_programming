#include "main.h"

/**
 * strncpy - Copies a num of bytes from str into dest
 * @dest: The str to copy to
 * @src: The src string
 * @n: num of bytes to copy from src.
 *
 * Return: pointer to final result string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int arr = 0, cnt = 0;

	while (src[arr++])
	{
		cnt++;
	}

	for (arr = 0; src[arr] && arr < n; arr++)
	{
		dest[arr] = src[arr];
	}
	
	for (arr = cnt; arr < n; arr++)
	{
		dest[arr] = '\0';
	}

	return (dest);
}
