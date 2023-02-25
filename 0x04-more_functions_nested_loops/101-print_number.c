#include "main.h"

/**
 * print_number - prints an integer.
 * @n: n is integer to be printed
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(numer / 10);

	_putchar((number % 10) + '0');
}
