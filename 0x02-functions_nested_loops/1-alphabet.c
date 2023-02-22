#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	for (char al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
