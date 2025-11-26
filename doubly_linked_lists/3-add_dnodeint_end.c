#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * add_dnodeint_end - adds a new node at the end of dlistint_t
 * @head: start of the list
 * @n: value stored in node
 * Return: address of new element on success, otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tail = *head;

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new;
	new->prev = tail;
	return (new);
}

