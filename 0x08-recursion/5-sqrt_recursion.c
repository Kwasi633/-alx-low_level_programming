#include "main.h"

/**
 * sqrt_find - first checks for the square root of given number
 * @g: the root to check through
 * @c: number to find square root of
 *
 * Return: The sqrt of C or -1 if number does not have natural sort
 */
int sqrt_find(int g, int c)
{
	if (g * g == c)
		return (g);
	if ( g * g > c)
		return (-1);
	return (sqrt_find(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural sqrt of a num
 * @n: number to find sort of
 *
 * Return: natural sqr root or -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_find(1, n));
}
