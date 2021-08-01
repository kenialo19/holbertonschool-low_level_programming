#include "lists.h"
#include <string.h>

/**
 * *add_node -  adds a new node at the beginning of a list_t list.
 * @head: list.
 * @str: string.
 *
 * Return: address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int i = 0;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = NULL;
	if (*head != NULL)
	{
		ptr->next = *head;
	}
	*head = ptr;
	return (ptr);
}
