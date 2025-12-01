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
	node_t *new_node;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
	{
		return (0);
	}
	key_index(key);
	new_node = malloc(sizeof(node_t));
	if (new_node == NULL)
	{
	return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next =

}

