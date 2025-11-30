#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all data of a dlistint_t linked list
 * @head: the start of the list
 *
 * Return: the sum on success, otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}

