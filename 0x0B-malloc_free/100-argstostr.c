#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all args of your program
 * @ac: counter
 * @av: vector
 *
 * Return: a pointer to a new string else NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	int n = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}

	n++;
	str = malloc(n * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[av][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
