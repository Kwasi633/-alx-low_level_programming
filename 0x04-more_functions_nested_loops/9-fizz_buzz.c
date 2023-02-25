#include <stdio.h>

/**
 * main - this prints numbers from 1 to 100,
 *        but multiples of 3 prints Fizz and
 *        any multiples of 5 print Buzz, both
 *        multiples of 3 and 5 print Fizzbuzz.
 *       
 *
 *Return: 0 if true.
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", number);
		}
		if (number != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
