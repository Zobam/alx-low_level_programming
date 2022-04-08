#include <stdio.h>

/**
 * main - start point of the program
 *
 * Return: (0) on success
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}

		x++;
	}
	
	putchar('\n');
	return (0);
}
