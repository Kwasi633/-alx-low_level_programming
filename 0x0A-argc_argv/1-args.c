#include <stdio.h>

/**
 * main - Prints the number of args passed to it without program name
 * @argc: Argument count input
 * @argv: Argument vector, arr of pointers to the args
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
