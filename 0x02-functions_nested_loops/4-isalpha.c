#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character passed in as argument
 *
 * Return: 1 is c is an alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}
