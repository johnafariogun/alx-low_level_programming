#include "hash_tables.h"
/**
 * hash_table_get - retrieves the value associated with a key in a hash table
 * @ht: the pointer to the hash table
 * @key: the key to be be valued
 * Return: On success the value, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	hash = ht->array[i];
	while (hash && strcmp(hash->key, key) != 0)
		hash = hash->next;

	if (hash == NULL)
		return (NULL);
	return (hash->value);
}
