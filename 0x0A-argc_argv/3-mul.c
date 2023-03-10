#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two nums followed by a new line.
 * @argc: Argument num
 * @argv: Argument vector, [] of pointersn to the args
 * Return: if program receives two args - 0
 * else -1.
 */

int main(int argc, char *argv[])
{
	int i, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	i = n1 * n2;

	printf("%d\n", i);

	return (0);
}
