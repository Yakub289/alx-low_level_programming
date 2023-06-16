#include "lists.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node of doubly linked list at index.
 * @head: head of doubly linked list
 * @index: index of node to be deleted
 * Return: 1 on success; -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int peach = 0;
	dlistint_t *list = *head, *deck = NULL;

	if (head == NULL || list == NULL)
		return (-1);
	if (index == 0)
	{
		if (list->next != NULL)
			list->next->prev = NULL;
		*head = list->next;
		free(list);
		return (1);
	}
	while (peach != index && list != NULL)
	{
		deck = list;
		list = list->next;
		peach++;
	}
	if (list == NULL)
		return (-1);
	deck->next = list->next;
	if (list->next != NULL)
		list->next->prev = deck;
	free(list);
	return (1);
}
