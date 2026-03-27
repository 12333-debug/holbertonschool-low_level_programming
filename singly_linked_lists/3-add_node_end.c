#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)

{
	if (head == NULL)
	return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
	return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
	free(new);
		return (NULL);
	}
	while (str[i] != '\0')
	i++;

}
