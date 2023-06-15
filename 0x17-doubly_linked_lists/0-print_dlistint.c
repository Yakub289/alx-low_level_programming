#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Print all the elements in a linked list.
 * @h: head of doubly linked list.
 * Return: the number of nodes in the linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int number_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_nodes++;
	}

	return (number_nodes);
}
