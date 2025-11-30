#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a dlistint_t linked list
 * @index: of the to be deleted node, starts at 0
 * Return: 1 on success, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int counter = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	while (current != NULL)
	{
		if (counter == index)
		{
			if (current->prev != NULL)
			{
				current->prev->next = current->next;
			}
			else
			{
				*head = current->next;
			}
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		current = current->next;
		counter++;
	}
	return (-1);
}

