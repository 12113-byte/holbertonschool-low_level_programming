#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t
 * @head: start of the list
 * @str: string
 * Return: address of new element on success, otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0, counter = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *current = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	new->len = counter;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
	return (new);
}

