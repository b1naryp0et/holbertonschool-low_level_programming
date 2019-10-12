#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key
 * @key: key
 * @size: size
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
