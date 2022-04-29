#include "main.h"

/**
 * _prime - checks if a number is prime
 * @x: int number to check
 * @y: base increment value
 * Return:-1 if error, 1 if prime and 0 if not
 */

int _prime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (_prime(x, y + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
