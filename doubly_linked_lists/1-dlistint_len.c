#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts length
 * @h: start of the linked list
 * Return: number of elements in dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	if (current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	return (len);
}

