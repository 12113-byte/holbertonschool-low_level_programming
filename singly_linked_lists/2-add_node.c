#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: start of the linked list
 * @str: the string that will be added
 * Return: address of the new element on success, otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0, counter = 0;
	list_t *new = malloc(sizeof(list_t));

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
	new->next = *head;
	*head = new;
	return (new);
}

