#include "main.h"

/**
 * _isdigit - Checks for a digit to 9
 * @c: The digit to be checked is c
 *
 * Return: 1 if true else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
