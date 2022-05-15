#include "function_pointers.h"

/**
 * array_iterator - searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @action: pointer function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
