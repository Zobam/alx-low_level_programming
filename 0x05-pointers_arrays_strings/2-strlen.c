#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string argument to get lenght of
 * Return: lenght of string in int
 */

int _strlen(char *s)
{
	int c;

	while(*s != '\0')
	{
		c++;
		*s++;
	}

	return (c);
}
