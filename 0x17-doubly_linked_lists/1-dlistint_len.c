#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * dlistint_len - Get the number of elements in a linked list.
 * @h: head of the linked list.
 * Return: Number of elements in the linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int number_element = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		number_element++;
	}

	return (number_element);
}
