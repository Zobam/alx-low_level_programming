#include <stdio.h>

/**
 * main - start point of the program
 *
 * Return: (0) on success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		if (c != 'e' && c != 'q')
			putchar(c);

	putchar('\n');
	return (0);
}
