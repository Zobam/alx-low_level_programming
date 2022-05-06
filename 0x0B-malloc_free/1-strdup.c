#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be save in memory
 *
 * Return: NULL if str = NULL else returns a pointer to str
 */

char *_strdup(char *str)
{
	int i;
	char *string;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	i++;
	string = malloc(sizeof(char) * i);

	if (string == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		string[i] = str[i];
	string[i] = '\0';
	return (string);
}
