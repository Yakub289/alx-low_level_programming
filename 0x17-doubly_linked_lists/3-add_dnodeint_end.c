#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * add_dnodeint_end - A function that adds a new node at end of a linked list.
 * @head: head of the linked list.
 * @n: value for integer element in the node.
 * Return: the address of the new element, or
 * NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *end = *head;

	if (tmp  == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	while (end->next != NULL)
		end = end->next;
	end->next = tmp;
	tmp->prev = end;

	return (tmp);
}
