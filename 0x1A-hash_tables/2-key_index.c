#include "hash_tables.h"
/**
 * key_index - gets the index at which a key is stored for an array
 * @key: the key to the index
 * @size: the size of the array of the hash table
 * Return: the index of the key, makes use of the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
