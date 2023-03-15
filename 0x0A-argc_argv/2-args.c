#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: No. of arguments inputted
 * @argv: Arg vector, [] of pointers to the args
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
