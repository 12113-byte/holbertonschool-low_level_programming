#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 * @head: start of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp = current;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}

