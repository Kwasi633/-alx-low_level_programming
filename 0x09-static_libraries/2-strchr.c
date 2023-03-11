#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a str
 * @s: string to search
 * @c: character to locate
 *
 * Return: a pointer if c found else null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
