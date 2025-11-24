#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
	const list_t *node = h;
	size_t len = 0;

	while (node != NULL)
	{
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", node->len, node->str);
		}
		len++;
		node = node->next;
	}
	return(len);
}

