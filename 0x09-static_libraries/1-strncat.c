#include "main.h"

/**
 * _strncat - concatenates two strings taking specified bytes
 * @dest: first string.
 * @src: second string.
 * @n: the number of bytes to use from src
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n > j)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
