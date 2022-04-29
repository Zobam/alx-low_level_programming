#include "main.h"

/**
 * _puts_recursion - prints a string, and terminate it by a new line
 * @s: the string to be printed
 * Return: 0 on success, other value if otherwise
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
