#include <stdio.h>

#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 *
 * Return: 0 Always (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
