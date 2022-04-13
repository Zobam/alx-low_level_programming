#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: the number to stop at
 */

void print_times_tables(int n)
{
	int num, factor, product;
	
	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (factor = 1; factor <= n; factor++)
			{
				_putchar(',');
				_putchar(' ');

				product = num * factor;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 100)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
