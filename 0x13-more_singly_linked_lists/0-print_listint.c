#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head node of list to be printed
 *
 * Return: number of nodes printed.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
