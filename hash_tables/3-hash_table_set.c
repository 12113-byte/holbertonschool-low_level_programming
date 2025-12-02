#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table that gets added or update key/value to
 * @key: key string, cannot be empty
 * @value: value associated with the key, must be duplicated, can be empty
 * Return: 1 on success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *current;
	unsigned long int idx;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);

	current = ht->array[idx];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}

