#include "main.h"

/**
 * if_prime - checks to see if number is prime
 * @div: checker
 * @num: number to check
 *
 * Return: 1 if prime else 0
 */

int if_prime(int div, int num)
{
	if (num < 2 || num % div == 0)
		return (0);
	else if (div > num / 2)
		return (1);
	else
		return (if_prime(div + 1, num));
}

