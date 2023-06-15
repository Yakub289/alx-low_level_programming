#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * free_dlistint - A function that adds a new node at the end of a linked list.
 * @head: head of the linked list.
 * Return: the address of the new element, or
 * NULL if it failed.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp  = head->next;
		free(head);
		head = tmp;
	}
}
