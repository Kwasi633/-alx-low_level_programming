#include "main"
#include <stdio.h>

/**
 * _strpbrk - Searches a str for any set of bytes.
 * @s: string to be searched
 * @accept: set of bytes to search for
 *
 * Return: If a set matched - a pointer to the matched
 * if no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; n++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
