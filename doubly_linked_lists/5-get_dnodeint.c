#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list
 * @head: start of the list
 * @index: of the node, starting from 0
 * Return: nth node on success, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (counter == index)
		{
			return (current);
		}
		counter++;
		current = current->next;
	}
	return (NULL);
}

