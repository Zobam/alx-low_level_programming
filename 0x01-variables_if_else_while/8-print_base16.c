#include <stdio.h>

/**
 * main - start point of the program
 *
 * Return: (0) on success
 */

int main(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
		putchar(y);

	for (y = 'a'; y <= 'f'; y++)
		putchar(y);

	putchar('\n');
	return (0);
}
