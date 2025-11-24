#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets the number of elements in list_t
 * @h: start of the linked list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *node = h;
	size_t len = 0;

	while (node != NULL)
	{
		len++;
		node = node->next;
	}
	return (len);
}

