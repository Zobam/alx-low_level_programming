#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search within
 * @c: character to find in string
 * Return: memory address of first c or null if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	return (s[i] == c ? (s + i) : '\0');
}
