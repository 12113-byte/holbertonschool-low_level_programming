#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: beginning of the linked list
 * @n:
 * Return: address of the new element on success, otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head == NULL)
	{
	*head = new;
	new->next = NULL;
	new->prev = NULL;
	return (new);
	}

	(*head)->prev = new;
	*head = new;
	return (new);
}

