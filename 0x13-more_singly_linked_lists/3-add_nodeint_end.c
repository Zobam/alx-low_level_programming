#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
 * @head: double ptr to start of list
 * @n: the int t put in new node
 * Return: address of new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *location;

	if (!head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	location = *head;
	while (location->next)
	{
		location = location->next;
	}
	location->next = new;
	return (new);
}
