#include "hash_tables.h"
/**
 * hash_table_print - prints a hsh table (looks like a dictionary)
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash;
	unsigned int i;
	char *comma = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hash = ht->array[i];
			while (hash != NULL)
			{
			printf("%s'%s': '%s'", comma, hash->key, hash->value);
			comma = ", ";
			hash = hash->next;
			}
		}
	}
	printf("}\n");
}
