#include "main.h"

/**
 * _strcat - Concatenates the str pointer to by @src
 * 	to the end of the str pointer @dest 
 * @dest: pointer to the str to be joined together
 * @src:pointer to source str to be appended to @dest.
 *
 * Return: A pointer to the destination str @dest.
 */

char *_strcat(char *dest, char *src)
{
	int arr = 0, count = 0;

	while (dest[arr++])
	{
		count++;
	}

	for (arr = 0; src[arr]; arr++)
	{
		dest[count++] = src[arr];
	}

	return (dest);
}
