#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string argument to get lenght of
 * Return: lenght of string in int
 */

int _strlen(char *s)
{
	int c, i;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}

	return (c);
}
