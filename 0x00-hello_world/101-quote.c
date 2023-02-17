#include <unistd.h>
/**
 * main - A program that prints to unistd.h
 *
 * Return 1 (Success)
 */
int main(void)
{
	write(2, "and that place of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
