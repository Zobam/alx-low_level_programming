#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: amount of s2 bytes to be used
 *
 * Return: pointer to the concatenated string
 * or null on error
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x1, x2, i, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	x1 = 0, x2 = 0;
	while (*(s1 + x1))
		x1++;
	while (*(s2 + x2))
		x2++;
	if (n < x2)
		x2 = n;

	s = malloc(sizeof(char) * (x1 + x2 + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < x1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = x1; i < x2; j++, i++)
		*(s + j) = *(s2 + i);
	*(s + j) = '\0';

	return (s);
}
