#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to address of 1st variable
 * @b: pointer to address of 2nd variable
 * Return: zero always
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = a;
	*b = *a;
	*a = *temp;
}
