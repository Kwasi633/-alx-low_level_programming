#include <stdio.h>

/**
 * main - Prints program name followed by a new line
 * @argc: Argument count
 * @argv: Argument vector, arr of pointers to the arguments.
 *
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
