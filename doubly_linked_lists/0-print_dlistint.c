#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t
 * @h: start of doubly linked list
 *
 * Return: number of nodes on sucess
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	if (current == 0)
	{
		return (0);
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}
	return (len);
}

