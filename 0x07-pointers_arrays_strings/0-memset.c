#include "main.h"

/**
 * fills memory with a constant byte
 * @s: memory address to be filled
 * @n: number of bytes to be filled
 * @b: the constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
