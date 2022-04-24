#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: array's length
 */

void reverse_array(int *a, int n)
{
	int i, k, tmp;

	k = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[k];
		a[k] = tmp;
		k--;
	}
}
