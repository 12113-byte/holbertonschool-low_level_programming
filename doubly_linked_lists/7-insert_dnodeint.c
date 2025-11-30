#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node ad a given position
 * @idx: index of list where new node should be added, starts at 0
 * @h: start of the list
 * @n: data stored in node
 * Return: address of new node on success, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int counter = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (*h == NULL && idx > 0)
	{
		return (NULL);
	}
	while (current != NULL && counter < idx - 1)
	{
		current = current->next;
		counter++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;
	return (new);
}

