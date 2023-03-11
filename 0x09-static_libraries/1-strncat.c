#include "main.h"

/**
 * *_strncat - Adds two strings using inputted n of 
 * bytes from src.
 * @dest: pointer to destination to be appended upon.
 * @src: ponter to string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int arr = 0, count = 0;

	while (dest[arr++])
	{
		count++;
	}

	for (arr = 0; src[arr] && arr < n; arr++)
	{
		dest[count] = src[arr];
	}

	return (dest);
}
