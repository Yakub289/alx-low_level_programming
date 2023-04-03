#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint -Function  that adds a new node to the beginning of the list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 * Return: The address of the new element, or NULL if function fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
