#include "main.h"

/**
 * print_square - prints a with one character #.
 * @size: The size of the square
 */

void print_square(int size)
{
	int heigth, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (height == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
