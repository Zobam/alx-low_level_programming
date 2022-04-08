#include <stdio.h>

/**
 * main - start point of the program
 *
 * Return: (0) on success
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		putchar('0' +  x);

	putchar('\n');
	return (0);
}
