#include <stdio.h>
#include <stdarg.h>

/**
 * 0-sum_them_all.c - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of params or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
