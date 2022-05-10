#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to be allocated
 *
 * Return: a pointer to the allocated memory
 * or 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (x);
}
