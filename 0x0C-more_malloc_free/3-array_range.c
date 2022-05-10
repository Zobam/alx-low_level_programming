#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lower range of array
 * @max: upper range of array
 *
 * Return: pointer to the created array
 * and NULL if min > max or error
 */

int *array_range(int min, int max)
{
	int *x;
	int size, i, j;

	if (min > max)
		return (0);

	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;
	x = malloc(sizeof(int) * size);
	if (x == 0)
		return (0);

	for (i = 0, j = min; j <= max; i++, j++)
		x[i] = j;
	if (max == min)
		x[i] = max;
	return (x);
}
