#include "main.h"
/**
 * _strlen - return the string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int lng = 0;

	while (*s != '\0')
	{
		lng++;
		s++;
	}

	return (lng);
}
