#include "main.h"
/**
 * _strcpy- Copies the string pointed by @src
 * including the terminating null byte to the buffer 
 * pointed to bt @dest.
 * @dest: pointer 
 * @src: The str to copy
 *
 * Return: A pointer to the destination string @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
