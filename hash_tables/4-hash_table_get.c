#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves value assosciated with a key
 * @ht: hash table we are looking into
 * @key: we are looking for
 * Return: value associated with the element on success,
 * otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (ht == NULL || key == NULL || key[0] == '\0')
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}

