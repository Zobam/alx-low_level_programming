#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: size of char
 * @c: the car to be stored
 *
 * Return: return NULL if size = 0 otherwise return car
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	if (size <= 0)
	{
		return (0);
	}
	string = malloc(sizeof(char) * size);

	if (string == 0)
		return (0);
	for (i = 0; i < size; i++)
		*(string + i) = c;
	*(string + i) = '\0';
	return (string);
}
