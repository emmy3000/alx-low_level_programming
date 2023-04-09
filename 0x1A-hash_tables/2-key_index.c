#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - Program prints a the index of a key after computation
 *
 * @key: key to index of it's value
 * @size: size of the array of the hash table
 *
 * Return: index position where the key/value pair will be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_code;

	/* Retrieve the value */
	hash_code = hash_djb2(key);

	/* Compute the index of the key */
	index = hash_code % size;

	return (index);
}
