#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @x: number passed as argument
 *
 * Return: last digit of x
 */

int print_last_digit(int x)
{
	int last_d = n % 10;
	if (last_d < 0)
		last_d = last_d * -1;

	_putchar(last_d + '0');
	return (last_d);
}
