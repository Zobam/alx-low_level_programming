#include "main.h"

/**
 * _sqrt - find the sqrt of number
 * @x: int number whose sqrt is to be found
 * @y: int base increment value
 * Return: sqrt of number x
 *
 * _sqrt_recursion - get the natural square root of a number
 * @n: int number to get the square root
 * Return: int the square root of the number n
 */

int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
