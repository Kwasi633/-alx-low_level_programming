#include "main.h"

/**
 * _strlen - A function that returns the len of a str
 * @s: The str
 *
 * Return: The len of @s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
