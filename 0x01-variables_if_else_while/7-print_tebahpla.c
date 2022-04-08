#include <stdio.h>

/**
 * main - start point of the program
 *
 * Return: (0) on success
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);

	putchar('\n');
	return (0);
}
