#include "hash_tables.h"
/**
 * key_index - gives the index of the key
 * @key: key argument to be used
 * @size: size of the array
 * Return: index of key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
