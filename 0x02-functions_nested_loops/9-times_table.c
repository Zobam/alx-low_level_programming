#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num, factor, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (factor = 1; factor <= 9; factor++)
		{
			_putchar(',');
			_putchar(' ');

			product = num * factor;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
