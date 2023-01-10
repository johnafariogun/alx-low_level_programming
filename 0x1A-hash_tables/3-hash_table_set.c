#include "hash_tables.h"
/**
 * hash_table_set - adds or updates an element in a hash table
 * @ht: pointer to the hash table
 * @key: key to add - must not be empty
 * @value: to be added
 * Return: upon failure 0, else 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash;
	char *tmp;
	unsigned long int i, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	tmp = strdup(value);
	if (tmp == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = tmp;
			return (1);
		}
	}

	hash = malloc(sizeof(hash_node_t));
	if (hash == NULL)
	{
		free(tmp);
		return (0);
	}
	hash->key = strdup(key);
	if (hash->key == NULL)
	{
		free(hash);
		return (0);
	}
	hash->value = tmp;
	hash->next = ht->array[i];
	ht->array[i]  = hash;
	return (1);
}
