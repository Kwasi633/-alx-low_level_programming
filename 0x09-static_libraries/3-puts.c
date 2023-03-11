#include "main.h"

/**
 * _puts - Prints a str
 * @str: The str
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
