#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - A function that returns the sum of all data.
 * @head: A pointer to the head of the listint_t list.
 * Return: If empty 0, or else sum of present data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
