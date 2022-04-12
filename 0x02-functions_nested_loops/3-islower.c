#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @x: aphabet passed as argument
 *
 * Return: 1 if lowercase and 0 (zero) otherwise
 */

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);
}
