#include "main.h"

/**
 * _strlen_recursion - get the length of string and return it
 * @s: string whose length is to be calculated
 * Return: integer value of string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
