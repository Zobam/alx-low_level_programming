# include "main.h"
# include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the joined string
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int i = 0, j = 0, k = 0;

	if (s1 != NULL)
	{
		for (; s1[i]; i++)
			;
	}
	if (s2 != NULL)
		for (; s2[j]; j++)
			;
	string = malloc(sizeof(char) * (i + j + 1));
	if (string == NULL)
		return (NULL);
	while (k < i)
	{
		string[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		string[k] = s2[k - i];
		k++;
	}
	string[k] = '\0';
	return (string);
}
