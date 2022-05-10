#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _allocatemem - allocate memory to argument
 * @pointer: initial address
 * @x: argument to initialize with
 * @n: size of bytes to initialize
 *
 * Return: pointer to char
 */

char *_allocatemem(char *ptr, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = x;

	return (ptr);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array element
 * @size: sizes of array element
 *
 * Return: pointer to the allocated memory
 * and NULL if size = 0 or error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (nmemb == 0 || size == 0)
		return (0);

	x = malloc(nmemb * size);
	if (x == 0)
		return (0);
	_allocatemem(x, 0, size * nmemb);
	return (x);
}
