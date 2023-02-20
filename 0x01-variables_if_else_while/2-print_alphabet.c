#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lower case alphabets
 *
 * Retrun: 0, if successful
 */
int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
