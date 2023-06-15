#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
* get_dnodeint_at_index - returns  nth node of a doubl linked list.
* @head: head of list
* @index: index of node
* Return: nth node or NULL if node doesn't exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	for (x = 0; head != NULL; x++)
	{
		tmp = head;
		head = head->next;
		if (x == index)
			return (tmp);
	}

	return (NULL);
}
