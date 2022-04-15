#include "main.h"
/**
 * print_numbers - Prints the number zero to nine
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar ('\n');
}
