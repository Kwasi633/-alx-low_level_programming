#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 * 10 times and a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char al;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
