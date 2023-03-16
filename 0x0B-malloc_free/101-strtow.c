#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - counts the no of words in a string
 * @c: str to count
 *
 * Return: no of words in str
 */
int count_words(char *c)
{
	int i, n = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i] == ' ')
		{
			if (c[i + 1] != ' ' && c[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a str into words
 * @str: str to split
 *
 * Return: Null if str is null, str = " " or error
 * else pointer to an array
 */

char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count_words(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;

			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][1] = str[i + 1];
			w[wc][1] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
