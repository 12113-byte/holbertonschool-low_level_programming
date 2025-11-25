#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees list_t
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp = current;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
	return;
}

