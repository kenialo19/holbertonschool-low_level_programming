#include "hash_tables.h"

/**
 * *hash_table_create -  function that creates a hash table.
 * @size: is the size of the array
 * Return: new table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = NULL;
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	free(new_table);
	return (new_table);
}
